import os
from dotenv import load_dotenv
'''
Importamos o módulo os e a função load_dotenv
que serão utilizados para acessar as variáveis
de ambiente
'''

load_dotenv() #Carregamos as variáveis do .env


class Config:
    SECRET_KEY = os.environ.get("SECRET_KEY") 
    #Retorna a variável SECRET_KEY declarada no ambiente
    APP_TITLE = "Flask REST API Course"

    @staticmethod
    def init_app(app):
        pass
    #Permite que possamos configurar a aplicação utilizando a classe Config

'''
Criamos a classe Config, e declaramos as primeiras configurações
'''