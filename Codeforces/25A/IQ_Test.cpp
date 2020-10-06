#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];

    int even=0,odd=0,oddidx=0,evenidx=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            even++;
            evenidx=i;
        }
        else{
            odd++;
            oddidx=i;
        }
    }
    if(odd==1 && even>1)cout<<oddidx+1<<endl;
    else cout<<evenidx+1<<endl;

    return 0;
}
