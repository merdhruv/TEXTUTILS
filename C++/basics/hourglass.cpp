#include <bits/stdc++.h>

using namespace std;

int main(){
    int rows,columns;
    cout<<"enter rows and columns";
    cin>> rows >> columns;
    int arr[rows][columns];
    for(int i=0;i<columns;i++){
        for(int j=0;j<rows;j++){
            cout<<"enter value"<<endl;
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<columns;i++){
        for(int j=0;j<rows;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int sum=0;
    int max=-64;
    for(int i=0;i<columns;i++){
        for(int j=0;j<rows;j++){
            sum+=arr[i][j];
            sum+=arr[i][j+1];
            sum+=arr[i][j+2];
            sum+=arr[i+1][j+1];
            sum+=arr[i+2][j];
            sum+=arr[i+2][j+1];
            sum+=arr[i+2][j+2];
            if(sum>max){
                max=sum;
            }
        }
    }
    cout<<max;
    
    
    return 0;
}