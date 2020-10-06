#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int minidx=0,maxidx=0,maxval=0,minval=10000;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        if(a>maxval){
            maxval=a;
            maxidx=i;
        }
        if(a<=minval){
            minval=a;
            minidx=i;
        }
    }
    if(maxidx<=minidx)cout<<(maxidx-1)+(n-minidx)<<endl;
    else cout<<(maxidx-1)+(n-minidx)-1<<endl;



    return 0;
}