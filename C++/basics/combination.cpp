#include<iostream>
using namespace std;
int fac(int n){
    int factorial=1;
    for(int i=2;i<=n;i++){
        factorial*=i;

    }
    return factorial;
}


int main(){
    int n,r;
    cout<<"Enter a Number";
    cin>>n>>r;
    int ncr = fac(n)/(fac(n-r)*fac(r));
    cout<< ncr;
    return 0;

}