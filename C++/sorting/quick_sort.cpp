#include <iostream>
using namespace std;

void printArry(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
int partition(int a[], int low, int high)
{
    int pivot = a[low];
    int i = low + 1;
    int j = high;
    do
    {
        while (a[i] < pivot)
        {
            i++;
        }
        while (a[j] >= pivot)
        {
            j--;
        }
        if (i < j)
        {
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    } while (i < j);
    int temp = a[low];
    a[low] = a[j];
    a[j]=temp;
    return j;
}
void quickSort(int *a, int low, int high)
{
    if (low < high)
    {
        int index = partition(a, low, high);
        quickSort(a, low, index - 1);
        quickSort(a, index + 1, high);
    }
}

int main()
{
    int a[] = {3, 6, 8, 2, 1};
    int n = 5;
    printArry(a, n);
    quickSort(a, 0, n - 1);
    printArry(a, n);
    return 0;
}