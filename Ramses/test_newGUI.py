from tkinter import *
from tkinter.ttk import Progressbar
from tkinter.ttk import Combobox
from tkinter.ttk import Notebook
from tkinter.ttk import Treeview
from PIL import Image, ImageTk
import tkinter.font
from tkinter import filedialog
import sys
import os
import re
from PIL import Image as PILImage
from tkinter import messagebox


class Widget1():
    def __init__(self, parent):
        self.gui(parent)

    def gui(self, parent):
        if parent == 0:
            self.w1 = Tk()
            self.w1.geometry('1280x720')
        else:
            self.w1 = Frame(parent)
            self.w1.place(x = 0, y = 0, width = 1280, height = 720)
        self.file_check_var = IntVar()
        self.file_menu_title_check_var = IntVar()
        self.file_menu_body_check_var = IntVar()
        self.email_check_var = IntVar()
        self.keyword_label = Label(self.w1, text = "Keyword:", anchor='w', font = tkinter.font.Font(family = "Verdana", size = 12), cursor = "arrow", state = "normal")
        self.keyword_label.place(x = 50, y = 50, width = 100, height = 32)
        self.keyword_textbox = Entry(self.w1, font = tkinter.font.Font(family = "Verdana", size = 12), state = "normal")
        self.keyword_textbox.place(x = 50, y = 90, width = 150, height = 40)
        self.email_results_label = Label(self.w1, text = "Email Results", anchor='w', font = tkinter.font.Font(family = "Verdana", size = 12), cursor = "arrow", state = "normal")
        self.email_results_label.place(x = 50, y = 220, width = 140, height = 32)
        self.email_waiting_results_label = Label(self.w1, text = "... Awaiting Results", anchor='w', font = tkinter.font.Font(family = "Verdana", size = 12), cursor = "arrow", state = "normal")
        self.email_waiting_results_label.place(x = 50, y = 300, width = 540, height = 400)
        self.search_area_label = Label(self.w1, text = "Search Area", anchor='w', font = tkinter.font.Font(family = "Verdana", size = 12), cursor = "arrow", state = "normal")
        self.search_area_label.place(x = 300, y = 50, width = 130, height = 32)
        self.file_check = Checkbutton(self.w1, text = "Local Files", anchor='w', font = tkinter.font.Font(family = "Verdana", size = 12), cursor = "arrow", variable=self.file_check_var, onvalue=1, offvalue=0, state="normal")
        self.file_check.place(x = 300, y = 90, width = 150, height = 22)
        self.file_check.deselect()
        self.file_check['command'] = self.show_file_menu
        self.email_check = Checkbutton(self.w1, text = "Emails", anchor='w', font = tkinter.font.Font(family = "Verdana", size = 12), cursor = "arrow", state = "normal")
        self.email_check.place(x = 300, y = 120, width = 150, height = 22)
        self.email_check.deselect()
        self.email_check['command'] = self.email_check_func
        self.search_button = Button(self.w1, text = "SEARCH", font = tkinter.font.Font(family = "Verdana", size = 12), cursor = "arrow", state = "normal")
        self.search_button.place(x = 300, y = 150, width = 150, height = 30)
        self.search_button['command'] = self.search_button_func
        self.file_results_label = Label(self.w1, text = "File Results", anchor='w', font = tkinter.font.Font(family = "Verdana", size = 12), cursor = "arrow", state = "normal")
        self.file_results_label.place(x = 690, y = 220, width = 120, height = 32)
        self.file_awaiting_results_label = Label(self.w1, text = "... Awaiting Results", anchor='w', font = tkinter.font.Font(family = "Verdana", size = 12), cursor = "arrow", state = "normal")
        self.file_awaiting_results_label.place(x = 690, y = 300, width = 540, height = 400)

    def show_file_menu(self):
        if self.file_check_var.get() == 1:
            self.file_menu_title_check_func_var = IntVar()
            self.file_menu_body_check_func_var = IntVar()
            self.file_menu_title = Label(self.w1, text = "File Search", anchor='w', font = tkinter.font.Font(family = "Verdana", size = 12), cursor = "arrow", state = "normal")
            self.file_menu_title.place(x = 925, y = 50, width = 120, height = 22)
            self.file_menu_directory_label = Label(self.w1, text = "File Directory:", anchor='w', font = tkinter.font.Font(family = "Verdana", size = 12), cursor = "arrow", state = "normal")
            self.file_menu_directory_label.place(x = 810, y = 80, width = 150, height = 32)
            self.file_menu_directory_button = Button(self.w1, text = "Directory Finder", font = tkinter.font.Font(family = "Verdana", size = 12), cursor = "arrow", state = "normal")
            self.file_menu_directory_button.place(x = 980, y = 80, width = 180, height = 32)
            self.file_menu_directory_button['command'] = self.file_menu_directory_button_func
            self.file_menu_search_label = Label(self.w1, text = "Search Type:", anchor='w', font = tkinter.font.Font(family = "Verdana", size = 12), cursor = "arrow", state = "normal")
            self.file_menu_search_label.place(x = 810, y = 120, width = 150, height = 22)
            self.file_menu_title_check = Checkbutton(self.w1, text = "Title", anchor='w', font = tkinter.font.Font(family = "Verdana", size = 12), cursor = "arrow",variable=self.file_menu_title_check_func_var, onvalue=1, offvalue=0, state = "normal")
            self.file_menu_title_check.place(x = 990, y = 120, width = 90, height = 22)
            self.file_menu_title_check.deselect()
            self.file_menu_title_check['command'] = self.file_menu_title_check_func
            self.file_menu_body_check = Checkbutton(self.w1, text = "Body", anchor='w', font = tkinter.font.Font(family = "Verdana", size = 12), cursor = "arrow",variable=self.file_menu_body_check_func_var, onvalue=1, offvalue=0, state = "normal")
            self.file_menu_body_check.place(x = 990, y = 150, width = 90, height = 22)
            self.file_menu_body_check.deselect()
            self.file_menu_body_check['command'] = self.file_menu_body_check_func
        elif self.file_check_var.get() == 0:
            self.file_menu_title.destroy()
            self.file_menu_directory_label.destroy()
            self.file_menu_directory_button.destroy()
            self.file_menu_search_label.destroy()
            self.file_menu_title_check.destroy()
            self.file_menu_body_check.destroy()
    def file_menu_title_check_func(self):
        print("file_menu_title_check_func")
    def file_menu_body_check_func(self):
        print("file_menu_body_check_func")
    def file_menu_directory_button_func(self):
        print("file_menu_directory_button")
    def search_button_func(self):
        print("search_button")
        if self.file_menu_title_check_func_var.get() == 1:
            beans = self.print_title()
        if self.file_menu_body_check_func_var.get() == 1:
            beans = self.print_keyword()
    def email_check_func(self):
        print("email_check")
    
    def print_title(self):
        #Second code
        user_input = self.keyword_textbox.get()  # Get user input
        if not user_input:  # Check if user input is empty
            user_input = ""  # Replace with empty string if it's empty
        folder_selected = self.browse_folder()  # Get selected directory
        self.print_test1 = Label(self.w1, text = folder_selected, anchor='nw', font = tkinter.font.Font(family = "Verdana", size = 10), cursor = "arrow", state = "normal", bg="black", fg="white",wraplength=540)
        self.print_test1.place(x = 690, y = 260, width = 540, height = 20)
        print("Selected folder:", folder_selected)  # Print selected folder for debugging
        if folder_selected:  # Check if folder is selected
            files_array = self.list_files_in_directory(folder_selected, user_input)  # List files
            # Convert each FileObject to a string using the __str__ method
            print("/n")
            print("Now printing files_array")
            print(files_array[0].name)
            self.files_array = files_array
            files_as_strings = [str(file_obj) for file_obj in files_array]
            self.files_as_strings = files_as_strings
            
            if (self.file_menu_body_check_func_var.get() == 0):
                self.file_list_master()

            
        else:
            # Handle case where user cancels folder selection
            print("Folder selection cancelled.")
    
    
    def print_keyword(self):
        #Second code
        user_input = self.keyword_textbox.get()  # Get user input
        if not user_input:  # Check if user input is empty
            user_input = ""  # Replace with empty string if it's empty
        folder_selected = self.browse_folder()  # Get selected directory
        self.print_test1 = Label(self.w1, text = folder_selected, anchor='nw', font = tkinter.font.Font(family = "Verdana", size = 10), cursor = "arrow", state = "normal", bg="black", fg="white",wraplength=540)
        self.print_test1.place(x = 690, y = 260, width = 540, height = 20)
        print("Selected folder:", folder_selected)  # Print selected folder for debugging
        if folder_selected:  # Check if folder is selected
            files_keyword_array = self.find_files_with_keyword(folder_selected, user_input)  # List files
            self.files_keyword_array = files_keyword_array
            files_as_strings = [str(file_obj) for file_obj in files_keyword_array]
            self.files_as_strings = files_as_strings
            self.file_list_master()

            
        else:
            # Handle case where user cancels folder selection
            print("Folder selection cancelled.")
            
            
    def file_list_master(self):
        #Decide based on checks if both file and keyword clicked to either send list array to file_button_creator or to send to the keyword and body array joiner
        if (self.file_menu_title_check_func_var.get() == 1) and (self.file_menu_body_check_func_var.get() == 1):
            self.files_array = self.join_keyword_body(self.files_array,self.files_keyword_array)
            self.file_button_creator(self.files_array)
        elif (self.file_menu_title_check_func_var.get() == 1):
            self.file_button_creator(self.files_array)
        elif(self.file_menu_body_check_func_var.get() == 1):
            self.files_array = self.files_keyword_array
            self.file_button_creator(self.files_array)
    
    def join_keyword_body(self,files_array,files_keyword_array):
        #Remove duplicates in the keyword and body arrays
        unfiltered_combined_array = files_array + files_keyword_array
        unique_paths = set()
        combined_file_array = []
        for obj in unfiltered_combined_array:
            if obj.path not in unique_paths:
                unique_paths.add(obj.path)
                combined_file_array.append(obj)
        
        return combined_file_array
    def file_button_creator(self,files_array):
        #Create the buttons for the files
            self.print_test = Label(self.w1, text = "", anchor='nw', font = tkinter.font.Font(family = "Verdana", size = 10), cursor = "arrow", state = "normal", bg="black", fg="white",wraplength=540)
            self.print_test.place(x = 690, y = 340, width = 540, height = 320)
            self.file_left_button = Button(self.w1, text = "<", font = tkinter.font.Font(family = "Verdana", size = 12, weight = "normal"), cursor = "arrow", state = "normal",command=self.back)
            self.file_left_button.place(x = 823, y = 680, width = 70, height = 40)
            self.file_right_button = Button(self.w1, text = ">", font = tkinter.font.Font(family = "Verdana", size = 12, weight = "normal"), cursor = "arrow", state = "normal",command=self.forward)
            self.file_right_button.place(x = 1026, y = 680, width = 70, height = 40)
            self.i = 0
            array_size = len(files_array)
            if (array_size > 5):
                result_string = "Showing 6 out of " + str(array_size) + " files"
            else:
                result_string = "Showing " + str(array_size) + " out of " + str(array_size) + " files"
            self.file_array_size = Label(self.w1, text = result_string, anchor='nw', font = tkinter.font.Font(family = "Verdana", size = 10), cursor = "arrow", state = "normal", bg="black", fg="white",wraplength=540)
            self.file_array_size.place(x = 690, y = 280, width = 540, height =20)
            if (array_size > 0):
                self.button1 = Button(self.w1, text=self.files_array[self.i].name, font=tkinter.font.Font(family="Verdana", size=12),
                              cursor="arrow", state="normal", command=self.button1_open)
                self.button1.place(x=690, y=300, width=540, height=40)
            if (array_size > 1):
                self.button2 = Button(self.w1, text=self.files_array[self.i + 1].name, font=tkinter.font.Font(family="Verdana", size=12),
                              cursor="arrow", state="normal", command=self.button2_open)
                self.button2.place(x=690, y=360, width=540, height=40)
            if (array_size > 2):
                self.button3 = Button(self.w1, text=self.files_array[self.i + 2].name, font=tkinter.font.Font(family="Verdana", size=12),
                              cursor="arrow", state="normal", command=self.button3_open)
                self.button3.place(x=690, y=420, width=540, height=40)
            if (array_size > 3):
                self.button4 = Button(self.w1, text=self.files_array[self.i + 3].name, font=tkinter.font.Font(family="Verdana", size=12),
                              cursor="arrow", state="normal", command=self.button4_open)
                self.button4.place(x=690, y=480, width=540, height=40)
            if (array_size > 4):
                self.button5 = Button(self.w1, text=self.files_array[self.i + 4].name, font=tkinter.font.Font(family="Verdana", size=12),
                              cursor="arrow", state="normal", command=self.button5_open)
                self.button5.place(x=690, y=540, width=540, height=40)
            if (array_size > 5):
                self.button6 = Button(self.w1, text=self.files_array[self.i + 5].name, font=tkinter.font.Font(family="Verdana", size=12),
                              cursor="arrow", state="normal", command=self.button6_open)
                self.button6.place(x=690, y=600, width=540, height=40)
    
    
    def browse_folder(self):
        # Ask for text input from the user
        root = Tk()
        root.withdraw()  # Remove or comment out this line to keep the window visible
        folder_selected = filedialog.askdirectory()
        root.destroy()  # Close the Tkinter window after selecting the directory
        return folder_selected
        print("/n")
        print(folder_selected)


    def list_files_in_directory(self, directory, user_input):
        file_list = []
        try:
            for root, _, files in os.walk(directory):
                for file in files:
                    file_path = os.path.join(root, file).replace("\\", "/")
                    relative_path = os.path.relpath(file_path, directory)
                    file_name, _ = os.path.splitext(file)
                    print(relative_path)
                    file_object = FileObject(name=file, path=file_path, relative_path=relative_path)
                    file_list.append(file_object)
        except FileNotFoundError:
            print("Directory not found.")
        filtered_files_array = [file for file in file_list if user_input.lower() in file.name.lower()]
        print("/n")
        print("This is the filtered array")
        print(filtered_files_array)
        return filtered_files_array
        
        
    def find_files_with_keyword(self,directory, user_input):
        file_keyword_list = []
        # Recursively search through directory and subdirectories
        try:
            for root, dirs, files in os.walk(directory):
                for file in files:
                    if file.endswith(".txt"):
                        file_path = os.path.join(root, file)
                        with open(file_path, 'r', encoding='utf-8') as f:
                            content = f.read()
                            if re.search(user_input, content):
                                file_path = os.path.join(root, file).replace("\\", "/")
                                relative_path = os.path.relpath(file_path, directory)
                                file_name, _ = os.path.splitext(file)
                                print(relative_path)
                                file_object = FileObject(name=file, path=file_path, relative_path=relative_path)
                                file_keyword_list.append(file_object)
        except FileNotFoundError:
            print("Directory not found.")
        file_keyword_list = [file for file in file_keyword_list if user_input.lower() in file.name.lower()]
        print("/n")
        print("This is the filtered array")
        print(file_keyword_list)
        return file_keyword_list    
    
    def forward(self):
        if self.i < len(self.files_array) - 6:
            self.i += 1
            self.update_buttons()

    def back(self):
        if self.i > 0:
            self.i -= 1
            self.update_buttons()

    def update_buttons(self):
        self.button1.config(text=self.files_array[self.i])
        self.button2.config(text=self.files_array[self.i + 1])
        self.button3.config(text=self.files_array[self.i + 2])
        self.button4.config(text=self.files_array[self.i + 3])
        self.button5.config(text=self.files_array[self.i + 4])
        self.button6.config(text=self.files_array[self.i + 5])
    def button1_open(self):
        # Get the file extension
        file_path = self.files_array[self.i].path
        _, file_extension = os.path.splitext(file_path)

        # Check if it's a text file
        if file_extension.lower() == ".txt":
            self.open_text_file(file_path)
        else:
            self.error_message()
    def button2_open(self):
        # Get the file extension
        file_path = self.files_array[self.i + 1].path
        _, file_extension = os.path.splitext(file_path)

        # Check if it's a text file
        if file_extension.lower() == ".txt":
            self.open_text_file(file_path)
        else:
            self.error_message()    
    def button3_open(self):
        # Get the file extension
        file_path = self.files_array[self.i + 2].path
        _, file_extension = os.path.splitext(file_path)

        # Check if it's a text file
        if file_extension.lower() == ".txt":
            self.open_text_file(file_path)
        else:
            self.error_message()    
    def button4_open(self):
        # Get the file extension
        file_path = self.files_array[self.i + 3].path
        _, file_extension = os.path.splitext(file_path)

        # Check if it's a text file
        if file_extension.lower() == ".txt":
            self.open_text_file(file_path)
        else:
            self.error_message()
    def button5_open(self):
        # Get the file extension
        file_path = self.files_array[self.i + 4].path
        _, file_extension = os.path.splitext(file_path)

        # Check if it's a text file
        if file_extension.lower() == ".txt":
            self.open_text_file(file_path)
        else:
            self.error_message()   
    def button6_open(self):
        # Get the file extension
        file_path = self.files_array[self.i + 5].path
        _, file_extension = os.path.splitext(file_path)

        # Check if it's a text file
        if file_extension.lower() == ".txt":
            self.open_text_file(file_path)
        else:
            self.error_message()   
    
    
    def error_message(self):
        messagebox.showerror('Python Error', 'Error: Unsupported File Type')
    
    
    
    def open_text_file(self,file_path):
        try:
            with open(file_path, "r", encoding="utf-8") as file:
                file_content = file.read()
                print("File content:")
                print(file_content)

        except FileNotFoundError:
            print("File not found.")
        except IOError:
            print("Error reading the file.")
        except UnicodeDecodeError:
            print("Error decoding the file. Check the file's encoding.")

class FileObject:
    def __init__(self, name, path, relative_path):
        self.name = name
        self.path = path
        self.relative_path = relative_path

    def __str__(self):
        return f"Name: {self.name}"

if __name__ == '__main__':
    a = Widget1(0)
    a.w1.mainloop()