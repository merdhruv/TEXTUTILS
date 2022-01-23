#include<iostream>
using namespace std;

int main(){
   int n;  
   cin>>n;

   int a[n];
   for(int i=0;i<n;i++){
       cin>>a[i];
   }

   int ans = 2;  
   int pd = a[1]-a[0];
   int curr =2; 
   int i =2;
   
   while (i<n){
       if(pd==a[i]-a[i-1]){
           curr++;
       }
       else{
           pd = a[i]-a[i-1];
           curr = 2;
       }
       ans = max(ans , curr);
       i++;
    }
  
   cout<< ans<<endl;
   return 0;
}