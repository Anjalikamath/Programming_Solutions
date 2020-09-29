#include<iostream>
using namespace std;

int main(){
    int x=0,n;
    cin>>n;
    while(n--){
    string s;
    cin>>s;
    if(s[1]=='+')++x;
    else --x;
    }
    cout<<x<<endl;
    return 0;
}