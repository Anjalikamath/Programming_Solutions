#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
cin>>s;
unordered_map<char,int>m;
for(int i=0;i<s.size();i++)m[s[i]]++;
int cnt=0;
for(auto it=m.begin();it!=m.end();it++){
    if(it->second!=0)cnt++;
}
if(cnt%2!=0)cout<<"IGNORE HIM!"<<endl;
else cout<<"CHAT WITH HER!"<<endl;

    return 0;
}