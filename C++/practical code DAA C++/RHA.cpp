#include<iostream>
#include<time.h>
#define e 2.71828

using namespace std;

int roundNo(float num){
    return num < 0 ? num - 0.5 : num + 0.5;
}

void pBC(int candidate[], int n){
    int size = roundNo(n/e);
    cout<<"\nSample size is : "<<size<<endl;

    int best = 0;
    for(int i=1; i<size; i++)
        if(candidate[i] > candidate[best])
            best = 1;

    for(int i = size; i<n; i++)
        if(candidate[i] >= candidate[best]){
            best = i;
            break;
        }
    if (best >= size)
        cout<<"\nBest candidate found is "<<best+1<<" with talent "<<candidate[best]<<endl;
    else
        cout<<"Couldn't find best candidate\n";
}

int main(){
    int n = 0;
    int candidate[n];
    srand(time(0));
    for(int i=0; i<n; i++)
        candidate[i] = 1 + rand()%0;
    cout<<"Candidate : ";
    for(int i=0; i<n; i++)
        cout<<i + 1<<" ";
    cout<<endl;
    cout<<"Talents : ";
    for(int i=0; i<n; i++)
        cout<<candidate[i]<<" ";
    pBC(candidate, n);
    return 0;
}