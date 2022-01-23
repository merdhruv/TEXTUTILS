// 1               0c0
// 1 1             1c0 1c1   
// 1 2 1           2c0 2c1 2c2
// 1 3 3 1         3c0 3c1 3c2 3c3
// 1 4 6 4 1       4c0 4c1 4c2 4c3 4c4

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
    for (int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            int ncr = fac(i)/(fac(j)*fac(i-j));
            cout<<ncr<<" ";
        }
        cout<<endl;
    }

    return 0;

}