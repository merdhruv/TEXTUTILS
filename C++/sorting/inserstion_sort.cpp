#include<iostream>
using namespace std;

void printArry(int *a,int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void insertionSort(int *a,int n){
    int key, j;
    for(int i=1;i<n;i++){
        key = a[i];
        j=i-1;
        while(a[j]>key&&j>=0){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
}


int main(){
    int a[]={3,6,8,2,1};
    int n=5;
    printArry(a,n);
    insertionSort(a,n);
    printArry(a,n);
    return 0;
}