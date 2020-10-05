#include<iostream>

using namespace std;

int main(){
    string s1,s2;
    cin>>s1;
    cin>>s2;
    int n=s1.size();
    string s="";
    for(int i=0;i<n;i++){
        if(s1[i]==s2[i])s+='0';
        else s+='1';
    }
    cout<<s<<endl;
    return 0;
}