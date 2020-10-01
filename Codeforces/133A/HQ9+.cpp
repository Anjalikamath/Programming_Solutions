#include<iostream>

using namespace std;

int main(){
    string s;
    cin>>s;
    bool f=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='H' || s[i]=='Q' || s[i]=='9')
        {
            f=1;
            break;
        }
    }
    if(f)cout<<"YES\n";
    else cout<<"NO\n";

    return 0;
}