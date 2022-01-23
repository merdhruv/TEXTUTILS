#include<iostream>
#include<cmath>
using namespace std;
      
int main(){
    float n,m,a;
    cin>>n>>m>>a;
    float x = n/a;
    float y = m/a;
    cout<<ceil(x)*ceil(y);
    return 0;
}