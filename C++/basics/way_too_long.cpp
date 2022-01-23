#include<iostream>
#include<string>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string str;
        cin>>str;
        char f = str.front();
        char e = str.at(str.size() -1);
        if(str.size()>10){
            int temp = str.size()-2;
            cout<<f<<temp<<e<<endl;
        }
        else{
            cout<<str<<endl;
        }
    }
    return 0;
    
}