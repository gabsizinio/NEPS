from datetime import datetime

from factory import db
from main import app
from models import User


with app.app_context():
    # Obtemos o usuário que queremos deletar
    user = User.query.get(1)

    # Adicionamos a remoção em uma sessão
    db.session.delete(user)

    # Enviamos as mudanças ao banco de dados
    db.session.commit()