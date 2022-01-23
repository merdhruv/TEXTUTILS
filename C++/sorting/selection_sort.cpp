#include<iostream>
using namespace std;

void printArry(int *a,int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void selectionSort(int *a,int n){
    int min=0,index;
    for (int i=0;i<n-1;i++){
        index=i;
        for(int j=i;j<n;j++){
            if(a[min]>a[j]){
                min=j;
            }
        }
        int temp =a[index];
        a[index]=a[min];
        a[min]=temp;
    }
}


int main(){
    int a[]={3,6,8,2,1};
    int n=5;
    printArry(a,n);
    selectionSort(a,n);
    printArry(a,n);
    return 0;
}