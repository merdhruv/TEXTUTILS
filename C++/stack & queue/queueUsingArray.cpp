#include<iostream>
#include<stdlib.h>
using namespace std;

struct queue{
    int size;
    int f;
    int b;
    int *arr;
};
int isFull(queue*q){
    if(q->b==q->size-1){
        return 1;
    }
    return 0;
}
int isEmpty(queue*q){
    if(q->b==q->f){
        return 1;
    }
    return 0;
}
int dequeue(queue*q){
    int a=-1;
    if(isEmpty(q)){
        cout<<"queue is empty";
    }
    else{
        a = q->arr[q->f];
        q->f++;
    }
    return a;
    
}
void enqueue(queue *q,int a){
    if(isFull(q)){
        cout<<"queue is full";
    }
    else{
        q->b++;
        q->b=a;
        cout<<"element "<<a<<" has been queued"<<endl;
    }
}
int traverse(queue*q){
    for(int i=q->f;i<q->b;i++){
        return q->arr[i];
    }
}

int main(){

    struct queue *q= (struct queue *)malloc(sizeof(struct queue));
    q->size= 100;
    q->f=-1;
    q->b=-1;
    q->arr= (int*)malloc(q->size*sizeof(int));
    enqueue(q,10);
    enqueue(q,12);
    dequeue(q);
    traverse(q);
    return 0;
}