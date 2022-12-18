from datetime import datetime

from factory import db
from main import app
from models import User, Post
from flask import request

with app.app_context():
    posts = Post.query.filter(Post.text.ilike(f"%neps%"))

    posts_pagination = Post.query.paginate(1, 5)

    post = Post.order_by(Post.created.desc())

    search = request.args.get("search", "")


    


