#include<iostream>
using namespace std;

int main(){

    string s;
    cin>>s;
    int n=s.size();
    int i=0;
    bool flag=1;
    while(i<n){
        if(i+2<n && s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'){
            if(!flag)cout<<" ";
            i+=3;
        }
        else {
            flag=0;
            cout<<s[i];
            i++;
        }
        
    }
    
    cout<<endl;
    return 0;
}