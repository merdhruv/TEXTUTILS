#include<iostream>
#include<string>
using namespace std;
      
int main(){
    string s;
    cin>>s;
    int count = 0;
    int ans = 0;
    char prev = s[0];
    for(int i=0; i<(int)s.size(); i++){
        if(s[i] == prev){
            count++;
        }
        else{
            ans = max(ans, count);
            count = 1;
        }
        prev = s[i];
    }
    ans = max(ans, count);
    cout<<ans<<'\n';
    return 0;
}