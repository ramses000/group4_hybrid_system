#WIP Log in for shared account wasn't working(Add error handling)
# This program is responsible for handling all db related requests
import mysql.connector as mysql


host = "wyvern.cs.newpaltz.edu"
db = "forrestj3_db"
u = "forrestj3"
p = "o44o6e"


def db_connect():
    return(mysql.connect(host = host, database = db, user = u, password = p))







