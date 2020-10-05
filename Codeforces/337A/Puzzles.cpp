#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int arr[m];
    for(int i=0;i<m;i++)cin>>arr[i];
    sort(arr,arr+m);
    int ans=INT_MAX;
    for(int i=0;i<m-n+1;i++){
        int val=(arr[i+n-1]-arr[i]);
        ans=min(ans,val);
    }
    cout<<ans<<endl;
    return 0;
}