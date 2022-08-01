#include <iostream>
#include <string>

using namespace std;


bool change(string *x,string *y){
    while(x->size()>=y->size()){
        if(x == y){
        return true;
        }
        if(x[0]>y[0]){
            x[0] = max(x[0],x[1]);
            x->erase(0,1);
            change(x,y);
        }
        else{
            x[0] = min(x[0],x[1]);
            x->erase(0,1);
            change(x,y);
        }
       
        
    }
    return false;
};

bool check(string *a, string *b){
    if(a->size()>=b->size()){
        return change(a,b);
    }
    return change(b,a);
    
};




      
int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int x,y;
        string a[x],b[y];
        cin>>x>>y;
        cin>>a[x]>>b[y];
        if(check(a,b)){
            return 'Yes';
        }
        else{
            return 'No';
        }

    
    

    return 0;
    }
}