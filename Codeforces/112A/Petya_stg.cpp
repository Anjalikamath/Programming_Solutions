#include<iostream>
#include<string>
using namespace std;
int main(){

    string s1,s2;
    cin>>s1;
    cin>>s2;
int ans1=0,ans2=0;
    int n=s1.size();
   // char x1[n],x2[n];
    for(int i=0;i<n;i++){
        s1[i]=tolower(s1[i]);
        s2[i]=tolower(s2[i]);
        if(s1[i]>s2[i]){ans1++;break;}
        else if(s1[i]<s2[i]) {ans2++;break;}
        else {
            continue;
        }
    }
    if(ans1>ans2)cout<<"1"<<endl;
    else if(ans1<ans2)cout<<"-1"<<endl;
    else cout<<"0"<<endl;
    //cout<<strcmp(x1,x2)<<endl;
    return 0;
}