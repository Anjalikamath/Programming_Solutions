#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int arr[4];
    for(int i=0;i<4;i++)cin>>arr[i];
    sort(arr,arr+4);
    int cnt=1;
    int i=1;
    while(i<4){
        if(arr[i-1]!=arr[i]){
            cnt++;
            i++;
            }
        else while(i<4 && arr[i-1]==arr[i])i++;
    }
    int ans=4-cnt;
    cout<<ans<<endl;
    return 0;
}