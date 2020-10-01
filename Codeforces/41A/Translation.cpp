#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    string t;
    cin>>t;
    bool f=1;
    for(int i=0,j=t.size()-1;i<s.size(),j>=0;i++,j--){
        if(s[i]!=t[j]){
            f=0;
            break;
        }

    }
    if(t.size()!=s.size())cout<<"NO\n";
    else if(f)cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}
//we can also reverse 1 string and determine if the strings are then equal