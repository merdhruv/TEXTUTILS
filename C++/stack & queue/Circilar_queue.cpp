//everything same except the usage of %size

#include<iostream>
#include<stdlib.h>
using namespace std;

struct cirqueue{
    int size;
    int f;
    int b;
    int *arr;
};
int isFull(cirqueue*q){
    if((q->b+1)==q->f){
        return 1;
    }
    return 0;
}
int isEmpty(cirqueue*q){
    if(q->b==q->f){
        return 1;
    }
    return 0;
}
 void dequeue(cirqueue*q){
    int a=-1;
    if(isEmpty(q)){
        cout<<"queue is empty";
    }
    else{
        a = q->arr[q->f];
        q->f=(q->f+1)%(q->size);
        printf("%d has been dequeued", a);
    }
   
    
}
void enqueue(cirqueue *q,int a){
    if(isFull(q)){
        cout<<"queue is full";
    }
    else{
        q->b=(q->b+1)%(q->size);
        q->b=a;
        cout<<"element "<<a<<" has been queued"<<endl;
    }
}


int main(){

    struct cirqueue *q= (struct cirqueue *)malloc(sizeof(struct cirqueue));
    q->size= 8;
    q->f=0;
    q->b=0;
    q->arr= (int*)malloc(q->size*sizeof(int));
    enqueue(q,10);
    enqueue(q,12);
    dequeue(q);
   
    return 0;
}