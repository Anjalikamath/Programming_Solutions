#include<iostream>
using namespace std;

int main(){
int n,t;
cin>>n>>t;
string s;
cin>>s;
while(t--){
    string str="";
    for(int i=0;i<n;i++){
        if(i<n-1 && s[i]=='B' && s[i+1]=='G'){
            str+="G";
            str+="B";
            i++;
        }
        else str+=s[i];
    }
    s=str;
}
cout<<s<<endl;

return 0;
}