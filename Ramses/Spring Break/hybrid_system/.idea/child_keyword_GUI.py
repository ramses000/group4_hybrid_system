# child_keyword_GUI.py
from tkinter import *
from tkinter.ttk import Progressbar, Combobox, Notebook, Treeview
import tkinter.font
from tkinter import filedialog, messagebox
import os
import re
import json
from child_color import ChildColor
from child_renderGUI import ChildRenderGUI

class ChildKeywordGUI:
    def __init__(self, parent):
        self.parent = parent
        self.message_window = None
        self.color_handler = ChildColor()
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
    def keyword_gui(self, parent):
        self.color_handler = ChildColor()
        self.child_render_gui = ChildRenderGUI()
        self.var1 = IntVar()
        self.var2 = IntVar()
        self.new_keyword = Checkbutton(self.w1, text="New Keyword File", anchor='w',
                                       font=tkinter.font.Font(family="Verdana", size=12), cursor="arrow",
                                       state="normal", variable=self.var1, command=self.new_keyword_checkbox)
        self.new_keyword.place(x=50, y=140, width=220, height=40)
        self.new_keyword.deselect()
        self.edit_keyword = Checkbutton(self.w1, text="Edit Keyword File", anchor='w',
                                        font=tkinter.font.Font(family="Verdana", size=12), cursor="arrow",
                                        state="normal", variable=self.var2, command=self.edit_keyword_checkbox)
        self.edit_keyword.place(x=50, y=100, width=220, height=40)
        self.edit_keyword.deselect()
        self.keyword_active_btn = Button(self.w1, text="...Awaiting Input",
                                         font=tkinter.font.Font(family="Verdana", size=12, weight="normal"),
                                         cursor="arrow", state="normal")
        self.keyword_active_btn.place(x=900, y=115, width=250, height=30)
        self.set_button_colors(self.colors["text_color"], self.colors["button_bg_color"])
    def new_keyword_checkbox(self):
        pass
    def edit_keyword_checkbox(self):
        pass