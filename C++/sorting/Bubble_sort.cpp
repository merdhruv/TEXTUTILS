#include<iostream>
using namespace std;

void printArry(int *a,int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void bubbleSort(int *a,int n){
    int temp,sorted=0;
    for(int i=0;i<n-1;i++){
        cout<<"number of passes "<<i+1<<endl;
        sorted=1;
        for(int j=0;j<n-1+i;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                sorted=0;
            }
        }
        if(sorted){
            return;
        }
    }
}

int main(){
    //int a[]={3,4,5,2,21,34,11};
    int a[]={1,2,3,4,5,6};
    int n=6;
    printArry(a,n);
    bubbleSort(a,n);
    printArry(a,n);

    return 0;
}