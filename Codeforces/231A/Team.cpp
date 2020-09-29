#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ans=0;
    while(n--){
        int p,v,t;
        cin>>p>>v>>t;
        if(p&&v || v&&t || t&&p)ans++;
    }
    cout<<ans<<endl;

    return 0;
}