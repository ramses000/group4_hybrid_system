#Only used for testing 


from services import searchMessages
from db_services import db_connect


inp = input('Enter an email to search! for \n')

resp = searchMessages(inp)

print(resp)


