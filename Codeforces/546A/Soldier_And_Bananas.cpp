#include<iostream>
using namespace std;
int main(){
    long long int k,n,w;
    cin>>k>>n>>w;
    
    long long int ans=0;
    for(int i=1;i<=w;i++){
        ans+=(k*i);
    }
    if(ans<=n)cout<<0<<endl;
    else 
    cout<<ans-n<<endl;
    return 0;
}