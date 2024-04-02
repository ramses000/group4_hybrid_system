# child_file_GUI.py
from tkinter import *
from tkinter.ttk import Progressbar, Combobox, Notebook, Treeview
import tkinter.font
from tkinter import filedialog, messagebox
import os
import re
import json
from child_color import ChildColor
from child_renderGUI import ChildRenderGUI


class ChildFileGUI:
    def __init__(self, parent):
        self.parent = parent
        self.message_window = None
        self.color_handler = ChildColor
        self.child_render_gui = ChildRenderGUI()

        self.file_check_var = IntVar()
        self.file_menu_title_check_var = IntVar()
        self.file_menu_body_check_var = IntVar()
        self.email_check_var = IntVar()

        # Load colors from JSON file
        try:
            with open("color_mode.json", "r") as file:
                self.colors = json.load(file)
        except FileNotFoundError:
            self.colors = {
                "background_color": "white",
                "text_color": "black",
                "button_bg_color": "gray"
            }

        # Your other initialization code goes here
    def gui(self, parent):
        self.color_handler = ChildColor()
        self.child_render_gui = ChildRenderGUI()
        self.file_check_var = IntVar()
        self.file_menu_title_check_var = IntVar()
        self.file_menu_body_check_var = IntVar()
        self.email_check_var = IntVar()
        self.main_menu_btn = Button(self.w1, text="File / Email Browser",
                                    font=tkinter.font.Font(family="Calibri", size=9), cursor="arrow", state="normal")
        self.main_menu_btn.place(x=0, y=0, width=150, height=22)
        self.main_menu_btn['command'] = self.show_main_menu
        self.keyword_menu_btn = Button(self.w1, text="File Keyword Editor",
                                       font=tkinter.font.Font(family="Calibri", size=9), cursor="arrow", state="normal")
        self.keyword_menu_btn.place(x=160, y=0, width=150, height=22)
        self.keyword_menu_btn['command'] = self.show_keyword_menu

        self.color_menu_button = Button(self.w1, text="Color Menu", font=tkinter.font.Font(family="Calibri", size=9),
                                        cursor="arrow", state="normal")
        self.color_menu_button.place(x=320, y=0, width=150, height=22)
        self.color_menu_button['command'] = self.show_color_menu
        self.keyword_label = Label(self.w1, text="Keyword:", anchor='w',
                                   font=tkinter.font.Font(family="Verdana", size=12), cursor="arrow", state="normal")
        self.keyword_label.place(x=50, y=50, width=100, height=32)
        self.keyword_textbox = Entry(self.w1, font=tkinter.font.Font(family="Verdana", size=12), state="normal")
        self.keyword_textbox.place(x=50, y=90, width=150, height=40)
        self.email_results_label = Label(self.w1, text="Email Results", anchor='w',
                                         font=tkinter.font.Font(family="Verdana", size=12), cursor="arrow",
                                         state="normal")
        self.email_results_label.place(x=50, y=220, width=140, height=32)
        self.email_waiting_results_label = Label(self.w1, text="... Awaiting Results", anchor='w',
                                                 font=tkinter.font.Font(family="Verdana", size=12), cursor="arrow",
                                                 state="normal")
        self.email_waiting_results_label.place(x=50, y=300, width=540, height=400)
        self.search_area_label = Label(self.w1, text="Search Area", anchor='w',
                                       font=tkinter.font.Font(family="Verdana", size=12), cursor="arrow",
                                       state="normal")
        self.search_area_label.place(x=300, y=50, width=130, height=32)
        self.file_check = Checkbutton(self.w1, text="Local Files", anchor='w',
                                      font=tkinter.font.Font(family="Verdana", size=12), cursor="arrow",
                                      variable=self.file_check_var, onvalue=1, offvalue=0, state="normal")
        self.file_check.place(x=300, y=90, width=150, height=22)
        self.file_check.deselect()
        self.file_check['command'] = self.show_file_menu
        self.email_check = Checkbutton(self.w1, text="Emails", anchor='w',
                                       font=tkinter.font.Font(family="Verdana", size=12), cursor="arrow",
                                       state="normal")
        self.email_check.place(x=300, y=120, width=150, height=22)
        self.email_check.deselect()
        self.email_check['command'] = self.email_check_func
        self.search_button = Button(self.w1, text="SEARCH", font=tkinter.font.Font(family="Verdana", size=12),
                                    cursor="arrow", state="normal")
        self.search_button.place(x=300, y=150, width=150, height=30)
        self.search_button['command'] = self.search_button_func
        self.file_results_label = Label(self.w1, text="File Results", anchor='w',
                                        font=tkinter.font.Font(family="Verdana", size=12), cursor="arrow",
                                        state="normal")
        self.file_results_label.place(x=690, y=220, width=120, height=32)
        self.file_awaiting_results_label = Label(self.w1, text="... Awaiting Results", anchor='w',
                                                 font=tkinter.font.Font(family="Verdana", size=12), cursor="arrow",
                                                 state="normal")
        self.file_awaiting_results_label.place(x=690, y=300, width=540, height=400)
        self.set_button_colors(self.colors["text_color"], self.colors["button_bg_color"])
    def show_main_menu(self):
        self.child_render_gui.show_main_menu(self)

    def keyword_gui(self, parent):
        # Your keyword GUI code goes here
        pass

    def color_gui(self, parent):
        # Your color GUI code goes here
        pass

    def show_keyword_menu(self):
        self.child_render_gui.show_keyword_menu(self)

    def show_color_menu(self):
        self.child_render_gui.show_color_menu(self)

    def show_file_menu(self):
        if self.file_check_var.get() == 1:
            self.file_menu_title_check_func_var = IntVar()
            self.file_menu_body_check_func_var = IntVar()
            self.file_menu_title = Label(self.w1, text="File Search", anchor='w',
                                         font=tkinter.font.Font(family="Verdana", size=12), cursor="arrow",
                                         state="normal")
            self.file_menu_title.place(x=925, y=50, width=120, height=22)
            self.file_menu_directory_label = Label(self.w1, text="File Directory:", anchor='w',
                                                   font=tkinter.font.Font(family="Verdana", size=12), cursor="arrow",
                                                   state="normal")
            self.file_menu_directory_label.place(x=810, y=80, width=150, height=32)
            self.file_menu_directory_button = Button(self.w1, text="Directory Finder",
                                                     font=tkinter.font.Font(family="Verdana", size=12), cursor="arrow",
                                                     state="normal")
            self.file_menu_directory_button.place(x=980, y=80, width=180, height=32)
            self.file_menu_directory_button['command'] = self.file_menu_directory_button_func
            self.file_menu_search_label = Label(self.w1, text="Search Type:", anchor='w',
                                                font=tkinter.font.Font(family="Verdana", size=12), cursor="arrow",
                                                state="normal")
            self.file_menu_search_label.place(x=810, y=120, width=150, height=22)
            self.file_menu_title_check = Checkbutton(self.w1, text="Title", anchor='w',
                                                     font=tkinter.font.Font(family="Verdana", size=12), cursor="arrow",
                                                     variable=self.file_menu_title_check_func_var, onvalue=1,
                                                     offvalue=0, state="normal")
            self.file_menu_title_check.place(x=990, y=120, width=90, height=22)
            self.file_menu_title_check.deselect()
            self.file_menu_title_check['command'] = self.file_menu_title_check_func
            self.file_menu_body_check = Checkbutton(self.w1, text="Body", anchor='w',
                                                    font=tkinter.font.Font(family="Verdana", size=12), cursor="arrow",
                                                    variable=self.file_menu_body_check_func_var, onvalue=1, offvalue=0,
                                                    state="normal")
            self.file_menu_body_check.place(x=990, y=150, width=90, height=22)
            self.file_menu_body_check.deselect()
            self.file_menu_body_check['command'] = self.file_menu_body_check_func
            self.set_button_colors(self.colors["text_color"], self.colors["button_bg_color"])
        elif self.file_check_var.get() == 0:
            self.file_menu_title.destroy()
            self.file_menu_directory_label.destroy()
            self.file_menu_directory_button.destroy()
            self.file_menu_search_label.destroy()
            self.file_menu_title_check.destroy()
            self.file_menu_body_check.destroy()

    def search_button_func(self):
        # Your search button function code goes here
        pass

    def email_check_func(self):
        # Your email check function code goes here
        pass

    # Define other file system GUI functions here

    # Define other helper methods here

    # If necessary, define the FileObject class here as well
class FileObject:
    def __init__(self, name, path, relative_path):
        self.name = name
        self.path = path
        self.relative_path = relative_path

    def __str__(self):
        return f"Name: {self.name}"
