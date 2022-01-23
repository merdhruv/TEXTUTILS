#include<iostream>  //sum of first n natuarl numbers
using namespace std;

int sum(int n){
    int ans =0;
    for(int i=1;i<=n;i++){
        ans+=i;
    }
    return ans;
}

int main(){
    int n;
    cout<<"enter a number";
    cin>> n; 
    cout << sum(n)<<endl;
    
    return 0;

}
