from tkinter import messagebox
class ChildRenderGUI():
    def show_keyword_menu(self, widget_instance):
        self = widget_instance
        if hasattr(self, 'keyword_label') and self.keyword_label.winfo_exists():
            print("The new_keyword widget is created and placed.")
            self.keyword_label.destroy()
            self.keyword_textbox.destroy()
            self.email_results_label.destroy()
            self.email_waiting_results_label.destroy()
            self.search_area_label.destroy()
            self.file_check.destroy()
            self.email_check.destroy()
            self.search_button.destroy()
            self.file_results_label.destroy()
            self.file_awaiting_results_label.destroy()
            self.keyword_gui(self.parent)
            if hasattr(self, 'file_menu_title') and self.file_menu_title.winfo_exists():
                self.file_menu_title.destroy()
                self.file_menu_directory_label.destroy()
                self.file_menu_directory_button.destroy()
                self.file_menu_search_label.destroy()
                self.file_menu_title_check.destroy()
                self.file_menu_body_check.destroy()
            if hasattr(self, 'print_test1') and self.print_test1.winfo_exists():
                self.print_test1.destroy()
                if hasattr(self, 'print_test') and self.print_test.winfo_exists():
                    self.print_test.destroy()
                    self.file_left_button.destroy()
                    self.file_right_button.destroy()
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
        elif hasattr(self, 'dark_button') and self.dark_button.winfo_exists():
            self.dark_button.destroy()
            self.light_button.destroy()
            self.bg_color_button.destroy()
            self.text_color_button.destroy()
            self.button_bg_color_button.destroy()
            self.reset_color_button.destroy()
            self.keyword_gui(self.parent)
        else:
            messagebox.showwarning("Caution", "You already have the keyword menu open.")

    def show_main_menu(self, widget_instance):
        self = widget_instance
        print("Show Main Menu")
        if hasattr(self, 'new_keyword') and self.new_keyword.winfo_exists():
            self.new_keyword.destroy()
            self.edit_keyword.destroy()
            self.keyword_active_btn.destroy()
            if hasattr(self, 'filename_label') and self.filename_label.winfo_exists():
                self.filename_label.destroy()
                self.keyword_textbox.destroy()
                self.save_button.destroy()
            self.gui(self.parent)
        elif hasattr(self, 'dark_button') and self.dark_button.winfo_exists():
            self.dark_button.destroy()
            self.light_button.destroy()
            self.bg_color_button.destroy()
            self.text_color_button.destroy()
            self.button_bg_color_button.destroy()
            self.reset_color_button.destroy()
            self.gui(self.parent)
        else:
            messagebox.showwarning("Caution", "You already have the main menu open.")

    def show_color_menu(self, widget_instance):
        self = widget_instance
        if hasattr(self, 'keyword_label') and self.keyword_label.winfo_exists():
            print("The new_keyword widget is created and placed.")
            self.keyword_label.destroy()
            self.keyword_textbox.destroy()
            self.email_results_label.destroy()
            self.email_waiting_results_label.destroy()
            self.search_area_label.destroy()
            self.file_check.destroy()
            self.email_check.destroy()
            self.search_button.destroy()
            self.file_results_label.destroy()
            self.file_awaiting_results_label.destroy()
            if hasattr(self, 'file_menu_title') and self.file_menu_title.winfo_exists():
                self.file_menu_title.destroy()
                self.file_menu_directory_label.destroy()
                self.file_menu_directory_button.destroy()
                self.file_menu_search_label.destroy()
                self.file_menu_title_check.destroy()
                self.file_menu_body_check.destroy()
            if hasattr(self, 'print_test1') and self.print_test1.winfo_exists():
                self.print_test1.destroy()
                if hasattr(self, 'print_test') and self.print_test.winfo_exists():
                    self.print_test.destroy()
                    self.file_left_button.destroy()
                    self.file_right_button.destroy()
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
            self.color_gui(self.parent)
        elif hasattr(self, 'new_keyword') and self.new_keyword.winfo_exists():
            self.new_keyword.destroy()
            self.edit_keyword.destroy()
            self.keyword_active_btn.destroy()
            if hasattr(self, 'filename_label') and self.filename_label.winfo_exists():
                self.filename_label.destroy()
                self.keyword_textbox.destroy()
                self.save_button.destroy()
            self.color_gui(self.parent)
        else:
            messagebox.showwarning("Caution", "You already have the color menu open.")