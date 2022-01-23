#include<iostream>
#include<string.h>
using namespace std;

struct stack{
    char size;
    int top;
    char *arr;
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
char stackTop(struct stack*sp){
    return sp->arr[sp->top];
}
int precedence(char op)
{
    if (op == '*' || op == '/'){
        return 2;
        }
    if (op == '+'|| op =='-'){
        return 1;
    }
    else{
        return 0;
    }
}
bool IsOperand(char C) 
{
	if(C >= '0' && C <= '9') return true;
	if(C >= 'a' && C <= 'z') return true;
	if(C >= 'A' && C <= 'Z') return true;
	return false;
}
char* InfixTOPostfix(char *infix){
    struct stack *sp= (struct stack *)malloc(sizeof(struct stack)*sizeof(char));
    sp->size = 100;
    sp->top=-1;
    sp->arr= (char*)malloc(sp->size*sizeof(char));
    char *postfix= (char*)malloc(strlen(infix)+1*sizeof(char));
    int i=0,j=0;

    while(infix[i]!='\0'){
        if(IsOperand(infix[i])){
            postfix[j]=infix[i];
            j++;
            i++;
        }
        else{
            if(precedence(infix[i]>precedence(stackTop(sp)))){
                push(infix[i],sp);
                i++;
            }
            else{
                postfix[j]= pop(sp);
                j++;
            }
        }

    }
    while(!isEmpty(sp)){
        postfix[j] = pop(sp);
        j++;
    }
    postfix[j]='\0';
    return postfix;

}
int main(){

    char *infix = "a-b+t/6";
    cout<< InfixTOPostfix(infix); 

    return 0;
}