#include<iostream>
using namespace std;

int fibonacci(int n){
  if(n <= 1)
    return n;
  else
    return (fibonacci(n-1) + fibonacci(n-2) );
}

int main(){
  int n;
  cout << "Enter N value: ";
  cin >> n;
  cout << "Fibonacci Series, " << endl;
  for(int i=0; i < n; i++)
  cout << fibonacci(i) << "  ";
  return 0;
}
