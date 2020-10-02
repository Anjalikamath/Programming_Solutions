#include<iostream>

using namespace std;
int main(){
    string s1="I hate ";
    string s2="I love ";
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        if(i%2){
            cout<<s1;
            
        }
        else cout<<s2;
        if(i==n)cout<<"it";
        else cout<<"that ";
        i++;
    }

    return 0;
}