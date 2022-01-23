#include<iostream>
using namespace std;

struct node {
    int data;
    struct node *left;
    struct node *right;
};
struct node* createnode(int data){
    struct node *n;
    n->data = data;
    n = (struct node*)malloc(sizeof(struct node));
    n->left  = NULL;
    n->right = NULL;
    return n;
}
int isbst(struct node* n){
    if(n=NULL){
        return 1;
    }
    if(n->left!=NULL && n->left->data > n->data){
        return 0;
    }
    if(n->right!=NULL && n->right->data < n->data){
        return 0;
    }
    if(!isbst(n->left)||!isbst(n->right)){
        return 0;
    }
    return 1;

}
int search(node* n,int data){
    if(n->data==data){
        return 1;
    }
    else if(data>n->data){
        search(n->left,data);
    }
    search(n->right,data);

    return 0;
}
void insert(node*root,int data){
    node*p = NULL;
    while(root!=NULL){
        p = root;
        if(data==root->data){
            return;
        }
        else if(data<root->data){
            root= root->left;
        }
        else{
            root = root->right;
        }
    }   
    node *newnode=createnode(data);
    if(data<p->data){
        p->left = newnode;
    }
    else{
        p->right = newnode;
    }
    

   

}
void prefix(struct node *root){
    if(root=NULL){
        return;
    }
    cout<< root->data<<" ";
    prefix(root->left);
    prefix(root->right);

}
//        6
//       / \
//      4   8
//     / \  
//    1   5


int main(){
    struct node *p = createnode(6);
    struct node *p1 =createnode(4);
    struct node *p2 =createnode(8);
    struct node *p3 =createnode(1);
    struct node *p4 =createnode(5);

    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;

    
    search(p, 3);


    return 0;
}