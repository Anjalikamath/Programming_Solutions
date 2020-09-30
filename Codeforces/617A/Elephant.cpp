#include<iostream>
using namespace std;
int main(){
    long long int n;
    cin>>n;
    //cout<<n;
    
    int ans=n/5;
    if(n%5 >0){
        ans++;
    }
    
    
    cout<<ans<<endl;
    return 0;
}