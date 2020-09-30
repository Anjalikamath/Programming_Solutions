#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int sum=0;
    for(int i=0;i<n;i++){cin>>arr[i];sum+=arr[i];}

    int sum2=0,cnt=0;
    sort(arr,arr+n);
    for(int i=n-1;i>=0;i--){
        //cout<<arr[i]<<" ";
        sum2+=arr[i];
        cnt++;
        sum-=arr[i];
        if(sum2>sum)break;
    }
    cout<<cnt<<endl;

    return 0;
}