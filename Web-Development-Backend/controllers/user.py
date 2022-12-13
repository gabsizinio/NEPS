from datetime import datetime

from factory import db
from flask import Blueprint, jsonify
from flask.globals import request
from models.user import User

from sqlalchemy.exc import InterfaceError
from sqlalchemy.orm.exc import UnmappedInstanceError

user_controller = Blueprint("user_controller", __name__, url_prefix="/users")

@user_controller.get("/")
def get_users():
    
    users = User.query.all()

    return jsonify(
        [
            {
                "id": user.id,
                "username": user.username,
                "email": user.email,
                "birthdate": user.birthdate.isoformat() if user.birthdate else None,
                "created_at" : user.created_at.isoformat(),
            }
            for user in users
        ]
    ), 200


@user_controller.get("/<int:user_id>")
def get_user(user_id):

    user = User.query.get(user_id)

    if user is None:
        return {"msg": f"There is no user with id {user_id}"}, 404

    return {
        "id": user.id,
        "username": user.username,
        "email": user.email,
        "birthdate": user.birthdate.isoformat() if user.birthdate else None,
        "created_at" : user.created_at.isoformat(),
    }, 200


@user_controller.post("/")
def post_user():
    
    data = request.json

    if User.query.filter_by(username=data["username"]).first():
        return {"msg": "username not avaiable"}, 409

    user = User(
        username=data["username"], 
        email=data["email"],
        birthdate=datetime.fromisoformat(data["birthdate"]) if "birthdate" in data else None
    )
    try:
        db.session.add(user)
        db.session.commit()
    except InterfaceError: # Caso ocorra exeção do tipo InterfaceError
        db.session.rollback()
        return {"msg": "An Interface Error occured."}, 400
    except UnmappedInstanceError: # Caso ocorra exeção do tipo UnmappedInstanceError
        db.session.rollback()
        return {"msg": "An Unmapped Instance Error occured."}, 400
    except:
        db.session.rollback()
        return {"msg": "Something went wrong, call an adult."}, 400

    return {"msg": "User created successfully."}, 201


@user_controller.put("/<int:user_id>")
def put_user(user_id):
    
    user = User.query.get(user_id)

    if user is None:
        return {"msg": f"There is no user with id {user_id}"}, 404

    data = request.json

    user.username = data["username"]
    user.email = data["email"]
    if "birthdate" in data:
        user.birthdate = datetime.fromisoformat(data["birthdate"])

    db.session.commit()

    return {"msg": "User was updated."}, 200


@user_controller.delete("/<int:user_id>")
def delete_user(user_id):
    user = User.query.get(user_id)

    if user is None:
        return {"msg": f"There is no user with id {user_id}"}, 404

    db.session.delete(user)
    db.session.commit()

    return {"msg": "User deleted from the database."}, 200
