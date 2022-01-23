#include<iostream>
#include<vector>
using namespace std;
      
int main(){
    long n;
    cin>>n;
    vector <long> v;
    long sum1=0,usr;
    for(int i=0;i<n-1;i++){
        cin>>usr;
        v.push_back(usr);
        sum1 = sum1+v[i];
    }
    long sum = (n*(n+1))/2;

    cout<<sum-sum1;
    return 0;
}