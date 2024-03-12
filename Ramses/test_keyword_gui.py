
from tkinter import *
from tkinter.ttk import Progressbar
from tkinter.ttk import Combobox
from tkinter.ttk import Notebook
from tkinter.ttk import Treeview
import tkinter.font
from tkinter import filedialog
from tkinter import messagebox


class Widget2():
    def __init__(self, parent):
        self.gui(parent)

    def gui(self, parent):
        if parent == 0:
            self.w1 = Tk()
            self.w1.geometry('1280x720')
        else:
            self.w1 = Frame(parent)
            self.w1.place(x = 0, y = 0, width = 1280, height = 720)
        self.var1 = IntVar()
        self.var2 = IntVar()
        self.main_menu_btn = Button(self.w1, text = "File / Email Browser", font = tkinter.font.Font(family = "Calibri", size = 9), cursor = "arrow", state = "normal")
        self.main_menu_btn.place(x = 0, y = 0, width = 150, height = 22)
        self.keyword_menu_btn = Button(self.w1, text = "File Keyword Editor", font = tkinter.font.Font(family = "Calibri", size = 9), cursor = "arrow", state = "normal")
        self.keyword_menu_btn.place(x = 160, y = 0, width = 150, height = 22)
        self.new_keyword = Checkbutton(self.w1, text = "New Keyword File", anchor='w', font = tkinter.font.Font(family = "Verdana", size = 12), cursor = "arrow", state = "normal",variable=self.var1, command=self.new_keyword_checkbox)
        self.new_keyword.place(x = 50, y = 140, width = 220, height = 40)
        self.new_keyword.deselect()
        self.edit_keyword = Checkbutton(self.w1, text = "Edit Keyword File", anchor='w', font = tkinter.font.Font(family = "Verdana", size = 12), cursor = "arrow", state = "normal",variable=self.var2, command=self.edit_keyword_checkbox)
        self.edit_keyword.place(x = 50, y = 100, width = 220, height = 40)
        self.edit_keyword.deselect()
        self.keyword_active_btn = Button(self.w1, text = "...Awaiting Input", font = tkinter.font.Font(family = "Verdana", size = 12, weight = "normal"), cursor = "arrow", state = "normal")
        self.keyword_active_btn.place(x = 900, y = 115, width = 250, height = 30)
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
        self.keyword_active_btn = Button(self.w1, text = "Create Keyword File", font = tkinter.font.Font(family = "Verdana", size = 12, weight = "normal"), cursor = "arrow", state = "normal")
        self.keyword_active_btn.place(x = 900, y = 115, width = 200, height = 30)
        self.keyword_active_btn['command'] = self.new_keyword_func
    def edit_keyword_func_text_change(self):
        self.keyword_active_btn.destroy()
        self.keyword_active_btn = Button(self.w1, text = "Edit Keyword File", font = tkinter.font.Font(family = "Verdana", size = 12, weight = "normal"), cursor = "arrow", state = "normal")
        self.keyword_active_btn.place(x = 900, y = 115, width = 200, height = 30)
        self.keyword_active_btn['command'] = self.edit_keyword_func
        
    def new_keyword_func(self):
        self.file_path = self.browse_file()
        if self.file_path and "-Index" in self.file_path.name:
            messagebox.showerror('Python Error', 'Error: Cannot make a Index file for an Index file')
        else:
            print("Selected File Object:", self.file_path)
            self.filename_label = Label(self.w1, text="Creating Index file for: " + self.file_path.name, font=tkinter.font.Font(family="Verdana", size=12))
            self.filename_label.place(x=390, y=185, width=500, height=20)
            self.keyword_textbox = Text(self.w1, font = tkinter.font.Font(family = "Verdana", size = 12), state = "normal")
            self.keyword_textbox.place(x = 390, y = 210, width = 500, height = 300)
            self.save_button = Button(self.w1, text="Save", font=tkinter.font.Font(family="Verdana", size=12), command=self.create_index)
            self.save_button.place(x=390, y=520, width=500, height=30)
    
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
            self.filename_label = Label(self.w1, text="Editing Index file: " + self.file_path.name, font=tkinter.font.Font(family="Verdana", size=12))
            self.filename_label.place(x=390, y=185, width=500, height=20)
            with open(self.file_path.path, 'r') as file:
                file_content = file.read() 
                self.keyword_textbox = Text(self.w1, font=tkinter.font.Font(family="Verdana", size=12), state="normal")
                self.keyword_textbox.place(x=390, y=210, width=500, height=300)
            self.keyword_textbox.insert("1.0", file_content)  # Fill Text widget with file content
            self.save_button = Button(self.w1, text="Save", font=tkinter.font.Font(family="Verdana", size=12), command=self.update_index)
            self.save_button.place(x=390, y=520, width=500, height=30)
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

if __name__ == '__main__':
    a = Widget2(0)
    a.w1.mainloop()


