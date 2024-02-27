#Add error handling for db queries and API requests
from authorize import get_Service
#from db_services import db_connect
import base64
import emailClass

CONST_GMAIL_API = get_Service()


def getUserInfo():
    return(CONST_GMAIL_API.users().getProfile(userId='me').execute() )


def fetchMessages():
    return(CONST_GMAIL_API.users().messages().list(userId='me').execute())


def searchMessages(search):
    return(CONST_GMAIL_API.users().messages().list(userId='me', q = search).execute())



def storeMessages():
    #connect = db_connect()
    #cursor = connect.cursor()
    #cursor.execute("USE forrestj3_db")
    #connect.commit()
    response = fetchMessages()

    for mess in response["messages"]:
        resp = CONST_GMAIL_API.users().messages().get(userId='me', id = mess["id"],).execute()
        for p in resp["payload"]["parts"]:
            if p["mimeType"] in ["text/plain"]:
                data = base64.urlsafe_b64decode(p["body"]["data"]).decode("utf-8")
                print(data)
                print("\n")
                #cursor.execute("""INSERT INTO EMAILS VALUES (msg)""", 
                #(data))

        email = emailClass.emailClass("Email", data)
    
# 
