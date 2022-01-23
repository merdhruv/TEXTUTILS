#include<iostream>  
using namespace std;  
int main ()  
{    
    int arr[10] = { 10, 7, 15, 36, 72, 4, 45, 3, 58, 17};   
    cout<<"\nInput list is \n";
    for(int i=0;i<10;i++)  
    {  
        cout <<arr[i]<<"\t";  
    }    
    for(int k=1; k<10; k++)   
    {  
        int temp = arr[k];  
        int j= k-1;  
        while(j>=0 && temp <= arr[j])  
        {  
            arr[j+1] = arr[j];   
            j = j-1;  
        }  
        arr[j+1] = temp;  
    }  
    cout<<"\nInsertion Sorted list is \n";
    for(int i=0;i<10;i++)  
    {  
        cout <<arr[i]<<"\t";  
    }  
}