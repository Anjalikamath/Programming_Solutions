#include<iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    int k;
    cin>>k;
    //cout<<k<<" ";
    int i=s.size()-1;
    while(k--){
       int num=s[i]-'0';
       if(num>0){
           num--;
           s[i]=num+'0';
       }
       else{
           s=s.substr(0,i);
           i--;
       }

    }
    cout<<s<<endl;
    return 0;
}