import sqlite3

def connection():
    conn = sqlite3.connect('Database.db')
    mycursor = conn.cursor()
    mycursor.execute('create table if not exists user_registration(id text primary key, name text, password text)')
    conn.commit()
    conn.close()

connection()

def insert_user(id, name, password):
    conn = sqlite3.connect('Database.db')
    mycursor = conn.cursor()
    mycursor.execute('insert into user_registration values(?,?,?)',(id,name,password))
    conn.commit()
    conn.close()

# insert_user('1', 'xyz', 'a')

def show_user(id,password):
    conn = sqlite3.connect('Database.db')
    mycursor = conn.cursor()
    mycursor.execute('select * from user_registration where id=? and password=?',(id,password))
    row = mycursor.fetchall() 
    return row
# for x in show_user():
    # print(x)   