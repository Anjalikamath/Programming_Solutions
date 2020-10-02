#include<iostream>

using namespace std;

int main(){
    int n,h;
    cin>>n>>h;
    int ans=0;
    while(n--){
        int a;
        cin>>a;
        if(a<=h)ans++;
        else ans+=2;
    }
    cout<<ans<<endl;

    return 0;
}