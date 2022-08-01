from tkinter import *
from tkinter import ttk
from tkinter import messagebox
import backend

window = Tk(className='Login Page')
window.geometry('600x600+100+100')
window.configure(bg='Skyblue')
window.resizable('False','False')

frmtop = Frame(window,height=60, width=530, bd=2, relief=SOLID, bg='Darkslateblue')
frmtop.grid_propagate(0)
frmtop.grid(row=0,column=0,padx=30,pady=30)

lbl = Label(frmtop, text='Login Page',font=('bold',20),fg='Red')
lbl.grid(row=0,column=0,padx=190,pady=10)

frmmid = Frame(window, height=400, width=530, bd=2,relief=SOLID, bg='Darkslateblue')
frmmid.grid_propagate(0)
frmmid.grid(row=1,column=0)

id_value = StringVar()
pass_value = StringVar()

lblid = Label(frmmid, text='User_ID', font=('bold',10), fg='Red')
lblid.grid(row=0,column=0,padx=120,pady=30)
txtid = Entry(frmmid, font=('bold',10), fg='Green',textvariable=id_value)
txtid.grid(row=0,column=1)

lblpass = Label(frmmid, text='Password', font=('bold',10), fg='Red')
lblpass.grid(row=1,column=0,padx=50,pady=10)
txtpass = Entry(frmmid, font=('bold',10), fg='Green',show="*",textvariable=pass_value)
txtpass.grid(row=1,column=1)

def user_registration():
    nwin = Toplevel()
    nwin.title('Student Registration')
    nwin.state('zoomed')
    nwin.configure(bg='Orange')
    
    frmtop = Frame(nwin, height=100, width=500, bd=2, relief=SOLID, bg='Purple')
    frmtop.grid_propagate(0)
    frmtop.grid(row=0,column=0,padx=530,pady=10)

    lbl=Label(frmtop, text='Student Registration', font=('bold',30),fg='Red')
    lbl.grid(row=0,column=0,padx=70,pady=10)

    frmmid = Frame(nwin, height=800, width=800, bd=2, relief=SOLID, bg='Purple')
    frmmid.grid_propagate(0)
    frmmid.grid(row=1,column=0)

    lblid = Label(frmmid, text='User_ID', font=('bold',10), fg='Red')
    lblid.grid(row=0,column=0,padx=80,pady=30)
    txtid = Entry(frmmid, font=('bold',10), fg='Green')
    txtid.grid(row=0,column=1)  

    lblname = Label(frmmid, text='Name', font=('bold',10), fg='Red')
    lblname.grid(row=0,column=2,padx=80,pady=30)
    txtname = Entry(frmmid, font=('bold',10), fg='Green')
    txtname.grid(row=0,column=3)

    lbldob = Label(frmmid, text='DOB', font=('bold',10), fg='Red')
    lbldob.grid(row=1,column=0,padx=80,pady=30)
    txtdob = Entry(frmmid, font=('bold',10), fg='Green')
    txtdob.grid(row=1,column=1)  

    lblm = Label(frmmid, text='Mobile', font=('bold',10), fg='Red')
    lblm.grid(row=1,column=2,padx=80,pady=30)
    txtm = Entry(frmmid, font=('bold',10), fg='Green')
    txtm.grid(row=1,column=3)

    lblem = Label(frmmid, text='Email', font=('bold',10), fg='Red')
    lblem.grid(row=2,column=0,padx=80,pady=30)
    txtem = Entry(frmmid, font=('bold',10), fg='Green')
    txtem.grid(row=2,column=1)  

    lblad = Label(frmmid, text='Address', font=('bold',10), fg='Red')
    lblad.grid(row=2,column=2,padx=80,pady=30)
    txtad = Entry(frmmid, font=('bold',10), fg='Green')
    txtad.grid(row=2,column=3)

    lblc = Label(frmmid, text='Course', font=('bold',10), fg='Red')
    lblc.grid(row=3,column=0,padx=80,pady=30)
    txtc = Entry(frmmid, font=('bold',10), fg='Green')
    txtc.grid(row=3,column=1)  

    lblcd = Label(frmmid, text='Course Duration', font=('bold',10), fg='Red')
    lblcd.grid(row=3,column=2,padx=80,pady=30)
    txtcd = Entry(frmmid, font=('bold',10), fg='Green')
    txtcd.grid(row=3,column=3)

    lblcd = Label(frmmid, text='Course Fee', font=('bold',10), fg='Red')
    lblcd.grid(row=4,column=0,padx=80,pady=30)
    txtcd = Entry(frmmid, font=('bold',10), fg='Green')
    txtcd.grid(row=4,column=1)

    

    nwin.mainloop()

def login(Event=None):
    result = backend.show_user(id_value.get(),pass_value.get())
    if not result:
        messagebox.showinfo("Login Error!",'Not a Valid User')
        id_value.delete(0,END)
        pass_value.delete(0,END)
    else:
        messagebox.showinfo('Login Successfull!!','You Logged in successfully')
        user_registration()
        id_value.delete(0,END)
        pass_value.delete(0,END)

btn= Button(frmmid,text='Submit',font=('bold',10), fg='Green', command=lambda:[login()],cursor='hand2')
btn.grid(row=2,column=0,columnspan=2,pady=30)
window.mainloop()