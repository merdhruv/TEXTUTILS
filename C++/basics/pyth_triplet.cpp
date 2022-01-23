#include<iostream>  //pythagorian triplets
using namespace std;

bool check(int x,int y,int z){
    int a = max(x,max(y,z));
    int b,c;
    
    if(a==x){
        b=y;
        c=z;
    }
    else if(a==y){
        b=x;
        c=z;
    }
    else{
        b=x;
        c=y;
    }
    if(a*a == b*b +c*c){
        return true;
    }
    else {
        return false;
    }
}

int main(){
    int x,y,z;
    cout<<"enter tripets";
    cin>> x>>y>>z;
    if(check(x,y,z)){
        cout<<"pythagorian triplets";
    }
    else{
        cout<<"not pythagorian triplets";
    }

    return 0;

}
