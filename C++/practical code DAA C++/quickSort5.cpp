#include <bits/stdc++.h> 
using namespace std;  
void swap(int* ele1, int* ele2){  
    int t = *ele1;  
    *ele1 = *ele2;  
    *ele2 = t;  
}  

int partition (int a[], int beg, int end){  
    int pivot = a[end]; 
    int i = (beg - 1); 
    for (int j = beg; j <= end - 1; j++){  
        if (a[j] < pivot){  
            i++; 
            swap(&a[i], &a[j]);  
        }  
    }  
    swap(&a[i + 1], &a[end]);  
    return (i + 1);  
}  

void quickSort(int a[], int beg, int end){  
    if (beg < end){  
        int pIndex = partition(a, beg, end);  
        quickSort(a, beg, pIndex - 1);  
        quickSort(a, pIndex + 1, end);  
    }  
}  
  
void display(int a[], int n){  
    for (int i = 0; i < n; i++)  
        cout << a[i] << " ";  
    cout << endl;  
}  
  
int main(){  
    int a[] = {12, 6, 13, 9, 15, 2};  
    int n = sizeof(a) / sizeof(a[0]);
    cout << "Elements of array before sorting: \n";  
    display(a, n);
    quickSort(a, 0, n - 1);  
    cout << "Elements of array after sorting: \n";  
    display(a, n);  
    return 0;  
}
