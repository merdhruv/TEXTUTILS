#include <iostream>
#include <stdlib.h>
using namespace std;

struct stack {
   int size;
   int top;
   int *arr;

};
 int isEmpty(stack *ptr){
      if(ptr->top==-1){
         printf("stack is empty");
         return 1;
      }
      return 0;
   }
   int isFull(stack *ptr){
      if(ptr->top==ptr->size-1){
         printf("stack overflow");
         return 1;
      }
      return 0;
   }
   void push(int a, stack *ptr ){
      if(isFull(ptr)){
         cout<<"Stack Overflow";
      }
      ptr->top++;
      ptr->arr[ptr->top]=a;
   }
   int pop(stack *ptr){
      if(isEmpty(ptr)){
         cout<<"Stack Underflow";
      }
      int a = ptr->arr[ptr->top];
      ptr->top--;
      return a;
   }
   int peak(stack*ptr,int a){
      if(isEmpty(ptr)){
         cout<<"Stack is Empty";
      }
      return ptr->arr[a]; 
   }

int main() {

   struct stack *s;
   s->size=8;
   s->top=-1;
   s->arr = (int*)malloc(s->size*sizeof(int));

   push(4,s);
   push(5,s);
   push(6,s);
   for(int i=0;i<s->size;i++){
      peak(s,i);
   }
   return 0;
}
