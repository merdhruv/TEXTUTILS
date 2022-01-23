#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int main(){
    long n;
    cin>>n;
    vector<long> arr(n);
    for(long& i : arr) cin>>i;
    long  ans = 0;
    for(int i=1; i<n; i++){
        if(arr[i] < arr[i-1]){
            ans+=abs(arr[i-1]-arr[i]);
            arr[i] = arr[i-1];
        }
    }
    cout<<ans<<'\n';
    return 0;
}