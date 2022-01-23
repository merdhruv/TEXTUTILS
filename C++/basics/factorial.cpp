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
    int n;
    cout<<"Enter a Number";
    cin>>n;
    cout<<fac(n);

    return 0;

}
