#include<iostream>
#include<cstdlib>
#include<string>
#include<cstdio>
using namespace std;
struct tab {  //declaration of variables of the table.
   string word;
   int key;
   tab()
   {}
   tab( int k, string w ) //constructor to initialize the variable
   {
      word=w;
      key = k;
   }
};
void INSERT( tab T[], tab x ) {
   T[ x.key ] = x;
}
void DELETE( tab T[], tab x ) {
   T[ x.key ] = tab(0, "");
}
tab SEARCH( tab T[], int key ) {
   return T[ key ];
}
int main() {
   int i, k, c;
   string str;
   tab T[65536]; //initialize size of the table.
   tab x;
   for(i = 0; i < 65536;i++)
      T[i] = tab(0,"");
   while (1) {
      cout<<"1.Insert element into the key"<<endl;
      cout<<"2.Delete element from the table"<<endl;
      cout<<"3.Search element into the table"<<endl;
      cout<<"4.Exit"<<endl;
      cout<<"Enter your Choice: ";
      cin>>c;
      switch(c) {
         case 1: {
            string str1 = "";
            cout<<"Enter the key value: ";
            cin>>k;
            cout<<"Enter the string to be inserted: ";
            cin.ignore();
            getline(cin, str);
            INSERT(T, tab(k, str));
            break;
         }
         case 2:
            cout<<"Enter the key of element to be deleted: ";
            cin>>k;
            x = SEARCH(T, k);
            DELETE(T, x);
            break;
         case 3:
            cout<<"Enter the key of element to be searched: ";
            cin>>k;
            x = SEARCH(T, k);
            if (x.key == 0) { 
               cout<<"No element inserted at the key"<<endl;
               continue;
            }
            cout<<"Element at key "<<k<<" is-> ";
            cout<<"\""<<x.word<<"\""<<endl;
            break;
         case 4:
            exit(1);
         default:
            cout<<"Wrong Choice"<<endl;
      }
   }
   return 0;
}