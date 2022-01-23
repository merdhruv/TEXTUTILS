#include <iostream>
#include <stdlib.h>
using namespace std;

void printArry(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
void countSort(int*a, int n){
    int max=0;
    for(int i=0;i<n;i++){
        if(max<a[i]){
            max=a[i];
        }
    }
   
    int *b =(int*)malloc((max+1)*sizeof(int));
     for(int i=0;i<n;i++){
        b[i]=0;
    }
    for(int i=0;i<n;i++){
        b[a[i]]++;
    }
    int i=0;
    int j=0;
    while(i<=max){
        if(b[i]>0){
            a[j]=i;
            b[i]--;
            j++;
        }
        else{
            i++;
        }
    }

}
int main(){
    int a[]={3,6,8,2,1};
    int n=5;
    printArry(a,n);
    countSort(a,5);
    printArry(a,n);
    return 0;
}