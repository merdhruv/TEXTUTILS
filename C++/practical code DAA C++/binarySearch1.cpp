#include <iostream>
using namespace std;

int BSer(int a[], int first, int last, int ser){
   int middle;
   if(last >= first){
      middle = (first + last)/2;
      if(a[middle] == ser){
         return middle+1;
      }
      else if(a[middle] < ser){
         return BSer(a,middle+1,last,ser);
      }
    else{
         return BSer(a,first,middle-1,ser);
      }
   }
   return -1;
}

int main(){
   int num[10] = {12, 21, 34, 65, 87, 93, 99, 101, 152};
   int ser, loc=-1;
   cout<<"Enter the number that you want to search: ";
   cin>>ser;
   loc = BSer(num, 0, 9, ser);
   if(loc != -1){
      cout<<ser<<" found in the array at the location: "<<loc;
   }
   else{
      cout<<"Element not found";
   }
   return 0;
}