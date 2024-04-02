from child_color import ChildColor
from child_renderGUI import ChildRenderGUI
from child_file_GUI import ChildFileGUI
from child_keyword_GUI import ChildKeywordGUI
from tkinter import *
from tkinter.ttk import Progressbar
from tkinter.ttk import Combobox
from tkinter.ttk import Notebook
from tkinter.ttk import Treeview
# from PIL import Image, ImageTk
import tkinter.font
from tkinter import filedialog
import sys
import os
import re
# from PIL import Image as PILImage
from tkinter import messagebox
from tkinter import colorchooser
import json
# Add Light mode option and dark mode option. Save the user's preferred color to a json file and then retrieve it from startup.


class Widget1():
    def __init__(self, parent):
        self.gui_pre(parent)
        self.parent = parent
        self.message_window = None
        self.color_handler = ChildColor()
        self.child_render_gui = ChildRenderGUI()

    def gui_pre(self, parent):
        self.color_handler = ChildColor()
        self.child_file_GUI = ChildFileGUI
        self.child_keyword_GUI = ChildKeywordGUI
        try:
            with open("color_mode.json", "r") as file:
                self.colors = json.load(file)
        except FileNotFoundError:
            self.colors = {
                "background_color": "white",
                "text_color": "black",
                "button_bg_color": "gray"
            }
        if parent == 0:
            self.w1 = Tk()
            self.w1.geometry('1280x720')
            self.w1.configure(bg=self.colors["background_color"])
            self.gui(parent)
        else:
            self.w1 = Frame(parent)
            self.w1.place(x=0, y=0, width=1280, height=720)
            self.gui(parent)
        color_handler = ChildColor()
        self.child_render_gui = ChildRenderGUI()
        self.child_file_GUI = ChildFileGUI
        self.child_keyword_GUI = ChildKeywordGUI

    def gui(self, parent):
        self.child_file_GUI.gui(self,parent)

    def show_main_menu(self):
        self.child_render_gui.show_main_menu(self)

    def keyword_gui(self, parent):
        self.child_keyword_GUI.keyword_gui(self, parent)

    def show_keyword_menu(self):
        self.child_render_gui.show_keyword_menu(self)

    def color_gui(self, parent):
        self.dark_button = Button(self.w1, text="Dark Mode", font=tkinter.font.Font(family="Calibri", size=9),
                                  cursor="arrow", state="normal")
        self.dark_button.place(x=540, y=97, width=200, height=40)
        self.light_button = Button(self.w1, text="Light Mode", font=tkinter.font.Font(family="Calibri", size=9),
                                   cursor="arrow", state="normal")
        self.light_button.place(x=540, y=194, width=200, height=40)
        self.bg_color_button = Button(self.w1, text="Select Background Color",
                                      font=tkinter.font.Font(family="Calibri", size=9), cursor="arrow", state="normal")
        self.bg_color_button.place(x=540, y=291, width=200, height=40)
        self.text_color_button = Button(self.w1, text="Select Text Color",
                                        font=tkinter.font.Font(family="Calibri", size=9), cursor="arrow",
                                        state="normal")
        self.text_color_button.place(x=540, y=388, width=200, height=40)
        self.button_bg_color_button = Button(self.w1, text="Select Button Background",
                                             font=tkinter.font.Font(family="Calibri", size=9), cursor="arrow",
                                             state="normal")
        self.button_bg_color_button.place(x=540, y=485, width=200, height=40)
        self.reset_color_button = Button(self.w1, text="Reset Colors", font=tkinter.font.Font(family="Calibri", size=9),
                                         cursor="arrow", state="normal")
        self.reset_color_button.place(x=540, y=582, width=200, height=40)
        self.dark_button['command'] = self.save_dark_mode
        self.light_button['command'] = self.save_light_mode
        self.bg_color_button['command'] = self.select_background_color
        self.text_color_button['command'] = self.select_text_color
        self.button_bg_color_button['command'] = self.set_button_background_color
        self.reset_color_button['command'] = self.reset_colors
        self.set_button_colors(self.colors["text_color"], self.colors["button_bg_color"])

    def save_dark_mode(self):
        self.color_handler.save_dark_mode(self)

    def save_light_mode(self):
        self.color_handler.save_light_mode(self)

    def save_colors(self, colors):
        self.color_handler.save_colors(self, colors)

    def select_background_color(self):
        self.color_handler.select_background_color(self)

    def select_text_color(self):
        self.color_handler.select_text_color(self)

    def set_button_background_color(self):
        self.color_handler.set_button_background_color(self)

    def reset_colors(self):
        self.color_handler.reset_colors(self)

    def set_button_colors(self, text_color, button_bg_color):
        self.color_handler.set_button_colors(self, text_color, button_bg_color)

    def show_color_menu(self):
        self.child_render_gui.show_color_menu(self)

    def show_file_menu(self):
        self.child_file_GUI.show_file_menu(self)


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
        # Second code
        if hasattr(self, 'print_test1') and self.print_test1.winfo_exists():
            self.print_test1.destroy()
        user_input = self.keyword_textbox.get()  # Get user input
        if not user_input:  # Check if user input is empty
            user_input = ""  # Replace with empty string if it's empty
        folder_selected = self.browse_folder()  # Get selected directory
        self.print_test1 = Label(self.w1, text=folder_selected, anchor='nw',
                                 font=tkinter.font.Font(family="Verdana", size=10), cursor="arrow", state="normal",
                                 bg="black", fg="white", wraplength=540)
        self.print_test1.place(x=690, y=260, width=540, height=20)
        print("Selected folder:", folder_selected)  # Print selected folder for debugging
        self.set_button_colors(self.colors["text_color"], self.colors["button_bg_color"])
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
        # Second code
        if hasattr(self, 'print_test1') and self.print_test1.winfo_exists():
            self.print_test1.destroy()
        user_input = self.keyword_textbox.get()  # Get user input
        if not user_input:  # Check if user input is empty
            user_input = ""  # Replace with empty string if it's empty
        folder_selected = self.browse_folder()  # Get selected directory

        self.print_test1 = Label(self.w1, text=folder_selected, anchor='nw',
                                 font=tkinter.font.Font(family="Verdana", size=10), cursor="arrow", state="normal",
                                 bg="black", fg="white", wraplength=540)
        self.print_test1.place(x=690, y=260, width=540, height=20)
        print("Selected folder:", folder_selected)  # Print selected folder for debugging
        if folder_selected:  # Check if folder is selected
            files_keyword_array = self.find_files_with_keyword(folder_selected, user_input)  # List files
            self.files_keyword_array = files_keyword_array
            files_as_strings = [str(file_obj) for file_obj in files_keyword_array]
            self.files_as_strings = files_as_strings
            self.file_list_master()
            self.set_button_colors(self.colors["text_color"], self.colors["button_bg_color"])

        else:
            # Handle case where user cancels folder selection
            print("Folder selection cancelled.")

    def file_list_master(self):
        # Decide based on checks if both file and keyword clicked to either send list array to file_button_creator or to send to the keyword and body array joiner
        if (self.file_menu_title_check_func_var.get() == 1) and (self.file_menu_body_check_func_var.get() == 1):
            self.files_array = self.join_keyword_body(self.files_array, self.files_keyword_array)
            self.file_button_creator(self.files_array)
        elif (self.file_menu_title_check_func_var.get() == 1):
            self.file_button_creator(self.files_array)
        elif (self.file_menu_body_check_func_var.get() == 1):
            self.files_array = self.files_keyword_array
            self.file_button_creator(self.files_array)

    def join_keyword_body(self, files_array, files_keyword_array):
        # Remove duplicates in the keyword and body arrays
        unfiltered_combined_array = files_array + files_keyword_array
        unique_paths = set()
        combined_file_array = []
        for obj in unfiltered_combined_array:
            if obj.path not in unique_paths:
                unique_paths.add(obj.path)
                combined_file_array.append(obj)

        return combined_file_array

    def file_button_creator(self, files_array):
        if hasattr(self, 'print_test') and self.print_test.winfo_exists():
            self.print_test.destroy()
        if hasattr(self, 'file_left_button') and self.file_left_button.winfo_exists():
            self.file_left_button.destroy()
        if hasattr(self, 'file_right_button') and self.file_right_button.winfo_exists():
            self.file_right_button.destroy()
        if hasattr(self, 'file_array_size') and self.file_array_size.winfo_exists():
            self.file_array_size.destroy()
        if hasattr(self, 'button1') and self.button1.winfo_exists():
            self.button1.destroy()
        if hasattr(self, 'button2') and self.button2.winfo_exists():
            self.button2.destroy()
        if hasattr(self, 'button3') and self.button3.winfo_exists():
            self.button3.destroy()
        if hasattr(self, 'button4') and self.button4.winfo_exists():
            self.button4.destroy()
        if hasattr(self, 'button5') and self.button5.winfo_exists():
            self.button5.destroy()
        if hasattr(self, 'button6') and self.button6.winfo_exists():
            self.button6.destroy()
        # Create the buttons for the files
        self.print_test = Label(self.w1, text="", anchor='nw', font=tkinter.font.Font(family="Verdana", size=10),
                                cursor="arrow", state="normal", bg="black", fg="white", wraplength=540)
        self.print_test.place(x=690, y=340, width=540, height=320)
        self.file_left_button = Button(self.w1, text="<",
                                       font=tkinter.font.Font(family="Verdana", size=12, weight="normal"),
                                       cursor="arrow", state="normal", command=self.back)
        self.file_left_button.place(x=823, y=680, width=70, height=40)
        self.file_right_button = Button(self.w1, text=">",
                                        font=tkinter.font.Font(family="Verdana", size=12, weight="normal"),
                                        cursor="arrow", state="normal", command=self.forward)
        self.file_right_button.place(x=1026, y=680, width=70, height=40)
        self.i = 0
        array_size = len(files_array)
        if (array_size > 5):
            result_string = "Showing 6 out of " + str(array_size) + " files"
        else:
            result_string = "Showing " + str(array_size) + " out of " + str(array_size) + " files"
        self.file_array_size = Label(self.w1, text=result_string, anchor='nw',
                                     font=tkinter.font.Font(family="Verdana", size=10), cursor="arrow", state="normal",
                                     bg="black", fg="white", wraplength=540)
        self.file_array_size.place(x=690, y=280, width=540, height=20)
        if (array_size > 0):
            self.button1 = Button(self.w1, text=self.files_array[self.i].name,
                                  font=tkinter.font.Font(family="Verdana", size=12),
                                  cursor="arrow", state="normal", command=self.button1_open)
            self.button1.place(x=690, y=300, width=540, height=40)
        if (array_size > 1):
            self.button2 = Button(self.w1, text=self.files_array[self.i + 1].name,
                                  font=tkinter.font.Font(family="Verdana", size=12),
                                  cursor="arrow", state="normal", command=self.button2_open)
            self.button2.place(x=690, y=360, width=540, height=40)
        if (array_size > 2):
            self.button3 = Button(self.w1, text=self.files_array[self.i + 2].name,
                                  font=tkinter.font.Font(family="Verdana", size=12),
                                  cursor="arrow", state="normal", command=self.button3_open)
            self.button3.place(x=690, y=420, width=540, height=40)
            if (array_size > 3):
                self.button4 = Button(self.w1, text=self.files_array[self.i + 3].name,
                                      font=tkinter.font.Font(family="Verdana", size=12),
                                      cursor="arrow", state="normal", command=self.button4_open)
                self.button4.place(x=690, y=480, width=540, height=40)
            if (array_size > 4):
                self.button5 = Button(self.w1, text=self.files_array[self.i + 4].name,
                                      font=tkinter.font.Font(family="Verdana", size=12),
                                      cursor="arrow", state="normal", command=self.button5_open)
                self.button5.place(x=690, y=540, width=540, height=40)
            if (array_size > 5):
                self.button6 = Button(self.w1, text=self.files_array[self.i + 5].name,
                                      font=tkinter.font.Font(family="Verdana", size=12),
                                      cursor="arrow", state="normal", command=self.button6_open)
                self.button6.place(x=690, y=600, width=540, height=40)
            self.set_button_colors(self.colors["text_color"], self.colors["button_bg_color"])

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

    def find_files_with_keyword(self, directory, user_input):
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

    def open_text_file(self, file_path):
        try:
            with open(file_path, "r", encoding="utf-8") as file:
                file_content = file.read()
                print("File content:")
                print(file_content)
                if not self.message_window:
                    # Create the message window if it doesn't exist
                    self.message_window = Toplevel()
                    self.message_window.title("Information")

                    # Create a Text widget
                    self.text_widget = Text(self.message_window, wrap=WORD)
                    self.text_widget.insert(END, file_content)
                    self.text_widget.pack(side=LEFT, fill=BOTH, expand=True)

                    # Create a Scrollbar
                    scrollbar = Scrollbar(self.message_window, command=self.text_widget.yview)
                    scrollbar.pack(side=RIGHT, fill=Y)

                    # Configure Text widget to use the Scrollbar
                    self.text_widget.config(yscrollcommand=scrollbar.set)

                    # Bind the destruction of the window to a method
                    self.message_window.protocol("WM_DELETE_WINDOW", self.close_message_window)
                else:
                    # If the message window exists, bring it to the front
                    self.message_window.lift()
        except FileNotFoundError:
            messagebox.showerror("Error", f"File not found: {file_path}")
        except Exception as e:
            messagebox.showerror("Error", f"An error occurred: {e}")

    def close_message_window(self):
        # Destroy the window and reset the reference
        self.message_window.destroy()
        self.message_window = None

    def new_keyword_checkbox(self):
        if self.var1.get() == 1 and self.var2.get() == 1:
            self.var2.set(0)
            self.new_keyword_btn_text_change()
        if self.var2.get() == 0:
            self.new_keyword_btn_text_change()

    def edit_keyword_checkbox(self):
        if self.var2.get() == 1 and self.var1.get() == 1:
            self.var1.set(0)
            self.edit_keyword_func_text_change()
        if self.var1.get() == 0:
            self.edit_keyword_func_text_change()

    def new_keyword_btn_text_change(self):
        self.keyword_active_btn.destroy()
        self.keyword_active_btn = Button(self.w1, text="Create Keyword File",
                                         font=tkinter.font.Font(family="Verdana", size=12, weight="normal"),
                                         cursor="arrow", state="normal")
        self.keyword_active_btn.place(x=900, y=115, width=200, height=30)
        self.keyword_active_btn['command'] = self.new_keyword_func
        self.set_button_colors(self.colors["text_color"], self.colors["button_bg_color"])

    def edit_keyword_func_text_change(self):
        self.keyword_active_btn.destroy()
        self.keyword_active_btn = Button(self.w1, text="Edit Keyword File",
                                         font=tkinter.font.Font(family="Verdana", size=12, weight="normal"),
                                         cursor="arrow", state="normal")
        self.keyword_active_btn.place(x=900, y=115, width=200, height=30)
        self.keyword_active_btn['command'] = self.edit_keyword_func
        self.set_button_colors(self.colors["text_color"], self.colors["button_bg_color"])

    def new_keyword_func(self):
        self.file_path = self.browse_file()
        if self.file_path and "-Index" in self.file_path.name:
            messagebox.showerror('Python Error', 'Error: Cannot make a Index file for an Index file')
        else:
            print("Selected File Object:", self.file_path)
            self.filename_label = Label(self.w1, text="Creating Index file for: " + self.file_path.name,
                                        font=tkinter.font.Font(family="Verdana", size=12))
            self.filename_label.place(x=390, y=185, width=500, height=20)
            self.keyword_textbox = Text(self.w1, font=tkinter.font.Font(family="Verdana", size=12), state="normal")
            self.keyword_textbox.place(x=390, y=210, width=500, height=300)
            self.save_button = Button(self.w1, text="Save", font=tkinter.font.Font(family="Verdana", size=12),
                                      command=self.create_index)
            self.save_button.place(x=390, y=520, width=500, height=30)
        self.set_button_colors(self.colors["text_color"], self.colors["button_bg_color"])

    def create_index(self):
        if hasattr(self, 'file_path'):
            original_path = self.file_path.path
            index_path = original_path[:original_path.rfind('.')] + "-Index.txt"
            try:
                with open(index_path, 'x') as index_file:
                    text_content = self.keyword_textbox.get("1.0", "end-1c")  # Get text content from Text widget
                    index_file.write(text_content)
                messagebox.showinfo("Success", "Index file created successfully.")
            except FileExistsError:
                messagebox.showerror('Python Error', 'Error: Index file already exists.')
        else:
            messagebox.showerror('Python Error', 'Error: No file selected.')

    def edit_keyword_func(self):
        self.file_path = self.browse_file()
        if self.file_path and "-Index.txt" in self.file_path.name:
            print("Selected File Object:", self.file_path)
            self.filename_label = Label(self.w1, text="Editing Index file: " + self.file_path.name,
                                        font=tkinter.font.Font(family="Verdana", size=12))
            self.filename_label.place(x=390, y=185, width=500, height=20)
            with open(self.file_path.path, 'r') as file:
                file_content = file.read()
                self.keyword_textbox = Text(self.w1, font=tkinter.font.Font(family="Verdana", size=12), state="normal")
                self.keyword_textbox.place(x=390, y=210, width=500, height=300)
            self.keyword_textbox.insert("1.0", file_content)  # Fill Text widget with file content
            self.save_button = Button(self.w1, text="Save", font=tkinter.font.Font(family="Verdana", size=12),
                                      command=self.update_index)
            self.save_button.place(x=390, y=520, width=500, height=30)
            self.set_button_colors(self.colors["text_color"], self.colors["button_bg_color"])
        else:
            messagebox.showerror('Python Error', 'Error: Please select a valid Index file.')

    def update_index(self):
        if hasattr(self, 'file_path'):
            try:
                with open(self.file_path.path, 'w') as index_file:
                    text_content = self.keyword_textbox.get("1.0", "end-1c")  # Get text content from Text widget
                    index_file.write(text_content)
                messagebox.showinfo("Success", "Index file updated successfully.")
            except Exception as e:
                messagebox.showerror('Python Error', f'Error: {str(e)}')
        else:
            messagebox.showerror('Python Error', 'Error: No file selected.')

    def browse_file(self):
        file_path = filedialog.askopenfilename()
        if file_path:
            file_path = file_path.replace("\\", "/")
            file_name = file_path.split("/")[-1]
            file_obj = FileObject(name=file_name, path=file_path, relative_path="")
            return file_obj


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