#include<iostream>
using namespace std;
int main(){
    int n ;
    cin>>n;
    int num[14]={4,7,44,47,77,74,444,447,474,477,777,774,747,774};
    int i=0;
    bool flag=0;
    for(i=0;i<14;i++){
        if(n%num[i]==0){
            flag=1;
            break;
        }
    }
    if(flag)cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}