#include<iostream>
using namespace std;

void printArry(int *a,int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int merge(int*a, int mid, int low, int high){
    int b[100],j=0,k;
    k = mid+1;
    while(low<mid && k<high){
        if(a[low]<a[k]){
            b[j]=a[low];
            low++,j++;
        }
        if(a[k]<a[low]){
            b[j]=a[k];
            j++,k++;
        }
    }
    while(low<mid){
        b[j]=a[low];
        j++,low++;
    }
    while(k<high){
        b[j]=a[k];
        j++,k++;
    }
    for(int i=0;i<high;i++){
        a[i]=b[i];
    }
    return a[100];
}
void mergeSort(int *a,int high, int low){
   int mid = (low+high)/2;
   while(low<high){
       mergeSort(a, mid, low);
       mergeSort(a, high, mid+1);
       merge(a, mid, low, high);
   }
}


int main(){
    int a[]={3,6,8,2,1};
    int n=5;
    printArry(a,n);
    mergeSort(a,4,0);
    printArry(a,n);
    return 0;
}