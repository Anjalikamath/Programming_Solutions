#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int maxx=1;
    for(int i=0;i<n;i++)cin>>arr[i];
    int val=1;
    int i=0;
    while(i<n){
        if(i>0 && arr[i]>=arr[i-1]){
            val++;
            if(val>maxx)maxx=val;
        }
        else{val=1;}
        i++;
    }
cout<<maxx<<endl;
    return 0;
}