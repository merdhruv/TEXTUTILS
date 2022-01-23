#include<iostream>
#include<fstream>
#include<iomanip>
#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<ctype.h>
#include<time.h>
#include<windows.h>

using namespace std;
// function prototypes
void tips(void);
void practice(void);
void test(void);

void gotoxy(int x,int y){
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void clrscr(){
    system("CLS");
}

int main(){
    char choice;
    while(1){
        clrscr();
        gotoxy(33,5);
        cout<<"Typing Tutor";
        gotoxy(33,6);
        cout<<"____________";
        gotoxy(30,8);
        cout<<"1 - Typing Tips";
        gotoxy(30, 10);
        cout<<"2 - Typing Practice";
        gotoxy(30, 12);
        cout<<"3 - Typing Test";
        gotoxy(30, 14);
        cout<<"4 - Exit";
        gotoxy(30,30);
        cout<<"Enter Your Choice";

        choice = getch();
        switch(choice){
            case('1'):
                tips();
                break;
            case('2'):
                practice();
                break;
            case('3'):
                test();
                break;
            case('4'):
                exit(1);
                break;
            default:
                gotoxy(30,30);
                cout<<"invalid Choice";
                gotoxy(30,31);
                cout<<"Press any key to continue";
                getch();
        }

        
    }
    return 0;
}

void tips(void){
    clrscr();
    gotoxy(2,3);
    cout<<"Typing Tips";

    gotoxy(2,4);
    cout<<"____________";

    gotoxy(2,6);
    cout<<"1. First and foremost, make sure that you are seated comfortably with the ";
    gotoxy(5,7);
    cout<<"keyboard placed at appropriate height";

    gotoxy(2,9);
    cout<<"2. Use all yuor fingers while typing, with the thumb being used for pressing";
    gotoxy(5,10);
    cout<<"the space bar";

    gotoxy(2,12);
    cout<<"3. Explore the various keys present on the keyboard and gradually try to build";
    gotoxy(5,13);
    cout<<"yuor finger memory";

    gotoxy(2,15);
    cout<<"4. Avoid looking at the keyboard while typing and try to keep yuo eyes on the";
    gotoxy(5,16);
    cout<<"screen";

    gotoxy(2,18);
    cout<<"5. Practice as much as yuo can to build your typing skills";

    gotoxy(30,30);
    cout<<"Press any key to go back...";
    getch();
}

void practice(void){
    char ch1,ch2;
    int count,noc;
    fstream fptr1, fptr2;
    
    while(1){
        count=0;
        noc=0;
        clrscr();
        fptr1.open("practice.txt",ios::in);

        gotoxy(2,2);
        while(fptr1){
            fptr1.get(ch1);
            noc++;
        }
        fptr1.close();

        fptr2.open("type1.txt",ios::out);

        gotoxy(2,6);
        cout<<"Type the above text";

        gotoxy(2,8);

        time_t t1;
        time(&t1);
        for(int i=0;i<44;i++){
            ch2=getche();
            fptr2.put(ch2);
        }

        time_t t2;
        time(&t2);

        fptr2.close();

        fptr1.open("practice.txt",ios::in);
        fptr2.open("type1 .txt",ios::in);

        gotoxy(25,25);
        cout<<"Typing Practice Results....";

        gotoxy(25,27);
        int flag=0;
        int flag2=0;
        int flag3=0;
        for(int i=0;i<44;i++){
            fptr1.get(ch1);
            fptr2.get(ch2);
            if(flag==5){
                while(1){
                    if(flag2==0)
                        fptr1.get(ch1);
                    if(flag3==0)
                        fptr2.get(ch2);
                    if(ch1==' ')
                        flag2=1;
                    if(ch2==' ')
                        flag3=1;
                    if(flag2==1 && flag3==1)
                        break;
                }       
                flag=0;
            }
            if(ch1==ch2){
                flag=0;
            
                _cprintf("%c",ch2);
            }
            else{
                count++;
                flag++;
                
                _cprintf("%c",ch2);
            }
        }

        gotoxy(25,29);
        cout<<"Speed - "<<(9*60)/difftime(t2,t1)<<"words per min";

        gotoxy(25,31);
        cout<<"Accuracy - "<<(float ((noc-count))/float(noc))*100.00<<" %";
        fptr1.close();
        fptr2.close();
        while(1){
            gotoxy(25,34);
            cout<<"Practice Again? (Y/N)";
            ch1=getch();
            if(toupper(ch1)=='Y')
                break;
            else if(toupper(ch1)=='N')
                return;
        }
    }
}

void test(void){
    char ch1,ch2;
    int count,noc;
    fstream fptr1,fptr2;

    while(1){
        count=0;
        noc=0;
        clrscr();

        fptr1.open("test.txt",ios::in);
        gotoxy(1,2);
        while(fptr1){
            fptr1.get(ch1);
            cout<<ch1;
            if(ch1=='\n')
                cout<<"\n";
            noc++;
        }
        fptr1.close();

        fptr2.open("type2.txt",ios::out);

        gotoxy(1,17);

        time_t t1;
        time(&t1);

        for(int i=0;i<405;i++){
            ch2=getche();
            fptr2.put(ch2);
        }
        time_t t2;
        time(&t2);

        fptr2.close();

        fptr1.open("test.txt",ios::in);
        fptr2.open("type2.txt",ios::in);

        gotoxy(1,26);
        _cprintf("Typing Test Results..");

        gotoxy(1,29);
        int flag=0;
        int flag2=0;
        int flag3=0;
        for(int i=0;i<405;i++){
            fptr1.get(ch1);
            fptr2.get(ch2);
            if(flag==5){
                while(1){
                    if(flag2==0)
                        fptr1.get(ch1);
                    if(flag3==0)
                        fptr2.get(ch2);
                    if(ch1==' ')
                        flag2=1;
                    if(ch2==' ')
                        flag3=1;
                    if(flag2==1 && flag3==1)
                        break;
                }
                flag=0;
            }
            if(ch1==ch2){
                flag=0;
                _cprintf("%c",ch2);
            }
            else{
                count++;
                flag++;
                _cprintf("%c",ch2);
            }
        }
        gotoxy(1,37);

        cout<<setprecision(2);
        cout<<"Speed - "<<(71*60)/difftime(t2,t1)<<"words per min";

        gotoxy(1,39);
        cout<<"Accuracy - "<<(float((noc-count))/float(noc))*100.00<<"%";

        fptr1.close();
        fptr2.close();
        while(1){
            gotoxy(1,42);
            cout<<"Take the test again? (Y/N)";
            ch1=getch();
            if(toupper(ch1)=='Y')
                break;
            else if(toupper(ch1)=='N')
                return;
        }
    }
}