import json
from tkinter import colorchooser
from tkinter import *
from tkinter.ttk import Progressbar, Combobox, Notebook, Treeview
import tkinter.font
from tkinter import filedialog, messagebox
import os
import re
import json
from child_renderGUI import ChildRenderGUI
class ChildColor:

    def save_dark_mode(self, main_instance):
        colors = {
            "background_color": "black",
            "text_color": "black",
            "button_bg_color": "lightgray"
        }
        main_instance.save_colors(colors)

    def save_light_mode(self, main_instance):
        colors = {
            "background_color": "white",
            "text_color": "black",
            "button_bg_color": "lightgray"
        }
        main_instance.save_colors(colors)

    def save_colors(self, main_instance, colors):
        with open("color_mode.json", "w") as file:
            json.dump(colors, file, indent=4)
        print("Color mode saved.")
        main_instance.w1.configure(bg=colors["background_color"])
        main_instance.set_button_colors(colors["text_color"], colors["button_bg_color"])

    def select_background_color(self, main_instance):
        color = colorchooser.askcolor(title="Select Background Color")[1]
        if color:
            main_instance.colors["background_color"] = color
            main_instance.w1.configure(bg=color)
            self.save_colors(main_instance, main_instance.colors)

    def select_text_color(self, main_instance):
        color = colorchooser.askcolor(title="Select Text Color")[1]
        if color:
            main_instance.colors["text_color"] = color
            main_instance.set_button_colors(color, main_instance.colors["button_bg_color"])
            self.save_colors(main_instance, main_instance.colors)

    def set_button_background_color(self, main_instance):
        color = colorchooser.askcolor(title="Set Button Background Color")[1]
        if color:
            main_instance.colors["button_bg_color"] = color
            main_instance.set_button_colors(main_instance.colors["text_color"], color)
            self.save_colors(main_instance, main_instance.colors)

    def reset_colors(self, main_instance):
        default_colors = {
            "background_color": "white",
            "text_color": "black",
            "button_bg_color": "lightgray"
        }
        self.save_colors(main_instance, default_colors)
        main_instance.colors = default_colors

    def set_button_colors(self, main_instance, text_color, button_bg_color):
        if hasattr(main_instance, 'keyword_label') and main_instance.keyword_label.winfo_exists():
            main_instance.keyword_label.configure(fg=text_color, bg=button_bg_color)
            main_instance.keyword_textbox.configure(fg=text_color, bg=button_bg_color)
            main_instance.email_results_label.configure(fg=text_color, bg=button_bg_color)
            main_instance.email_waiting_results_label.configure(fg=text_color, bg=button_bg_color)
            main_instance.search_area_label.configure(fg=text_color, bg=button_bg_color)
            main_instance.file_check.configure(fg=text_color, bg=button_bg_color)
            main_instance.email_check.configure(fg=text_color, bg=button_bg_color)
            main_instance.search_button.configure(fg=text_color, bg=button_bg_color)
            main_instance.file_results_label.configure(fg=text_color, bg=button_bg_color)
            main_instance.file_awaiting_results_label.configure(fg=text_color, bg=button_bg_color)
        elif hasattr(main_instance, 'new_keyword') and main_instance.new_keyword.winfo_exists():
            main_instance.new_keyword.configure(fg=text_color, bg=button_bg_color)
            main_instance.edit_keyword.configure(fg=text_color, bg=button_bg_color)
            main_instance.keyword_active_btn.configure(fg=text_color, bg=button_bg_color)
            if hasattr(main_instance, 'filename_label') and main_instance.filename_label.winfo_exists():
                main_instance.filename_label.configure(fg=text_color, bg=button_bg_color)
                main_instance.keyword_textbox.configure(fg=text_color, bg=button_bg_color)
                main_instance.save_button.configure(fg=text_color, bg=button_bg_color)
        elif hasattr(main_instance, 'dark_button') and main_instance.dark_button.winfo_exists():
            main_instance.dark_button.configure(fg=text_color, bg=button_bg_color)
            main_instance.light_button.configure(fg=text_color, bg=button_bg_color)
            main_instance.bg_color_button.configure(fg=text_color, bg=button_bg_color)
            main_instance.text_color_button.configure(fg=text_color, bg=button_bg_color)
            main_instance.button_bg_color_button.configure(fg=text_color, bg=button_bg_color)
            main_instance.reset_color_button.configure(fg=text_color, bg=button_bg_color)
            main_instance.reset_color_button.configure(fg="black", bg="lightgray")

