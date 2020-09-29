#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ans=0;
    int sum=0;
    while(n--){
        int a,b;
        cin>>a>>b;
        sum-=a;
        sum+=b;
        ans=max(ans,sum);
    }
    cout<<ans<<endl;
    return 0;
}