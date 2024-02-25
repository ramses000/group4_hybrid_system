# This program connects to Gmail API and creates/returns service obj

from Google import Create_Service
import os
import sys


def get_Service():

    
   
    CLIENT_FILE = '../Jordan/Services/client.json'
    API_NAME = 'gmail'
    API_VERSION = 'v1'
    SCOPES = ['https://mail.google.com/']


    print("returning APII")
    return (Create_Service(CLIENT_FILE, API_NAME, API_VERSION, SCOPES))







