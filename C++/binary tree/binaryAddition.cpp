#include<iostream>  //Binary number addition
using namespace std;
int addBinary(int a,int b){
   int ans = 0;
   int carry = 0;
   while(a>0 &&b>0){
       if(a%2==0 && b%2==0){
           ans = ans*10 + carry;
           carry = 0;
       }
       else if(a%2==0 && b%2==1 || a%2==1 && b%2==0){
           if(carry==1){
               ans = ans*10 + carry; 
               carry = 1;
           }
           else{
               ans=ans*10 + 1;
               carry = 0;
           }
       }
       else{
           ans = ans*10 + carry;
           carry = 1;
       }
       a/=10;
       b/=10;
   }
   while(a>0){
       if(carry==1){
           ans = ans*10 + carry;
       }
       else{
           ans = ans*10 + a;
       }
   }
   while(b>0){
       if(carry==1){
           ans = ans*10 + carry;
       }
       else{
           ans = ans*10 + b;
       }
   }
    return ans;
}


int main(){
    int x,y;
    cout<<"Enter two Binary Numbers";
    cin>>x>>y;

    cout<<addBinary(x,y);
    return 0;

}
