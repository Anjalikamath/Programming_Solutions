#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){

    string s;
    cin>>s;
    int n=s.size();
    vector<char>v;
    for(int i=0;i<n;i++){
        char x= tolower(s[i]);
        //cout<<x<<" ";
        if(x=='a' || x=='e'||x=='o'||x=='i'||x=='u'||x=='y')continue;
        else v.push_back(x);
    }
    string ans="";
    for(int i=0;i<v.size();i++){ans+='.';ans+=v[i];}
    cout<<ans<<endl;
    return 0;
}