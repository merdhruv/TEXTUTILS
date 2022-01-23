#include<iostream>
using namespace std;
int lcm(int a,int b, int c){
    int max,lcm,count,flag=0;
    if(a>=b&&a>=c){
        max = a;
    }
    else if(b>=a&&b>=c){
        max=b;
    }
    else if(c>=b&&c>=a){
        max=c;
    }
    for(count=1;flag==0;count++){
        lcm = count*max;
        if(lcm%a==0 && lcm%b==0 &&lcm%c==0){
            flag=1;
        }
    }
    return lcm;
}
int minimumCuboids(int l, int b, int h){
    int x = lcm (l,b,h);
    int cubevol = x*x*x;
    int volume = l*b*h;
    int number = cubevol/volume;
    return number;
}
      
int main(){
    int l,h,b;
    cout<<"Enter the length of cuboid: "<<endl;
    cin>>l;
    cout<<"Enter the breadth of cuboid: "<<endl;
    cin>>b;
    cout<<"Enter the height of cuboid: "<<endl;
    cin>>h;
    int numb = minimumCuboids(l,b,h);
    cout<<"the number of cuboids required :"<< numb<<endl;
    return 0;
}