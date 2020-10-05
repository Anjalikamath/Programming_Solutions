#include<iostream>
using namespace std;
int main(){

    long long int n;
    cin>>n;
    long long int e=n/2;
    long long int o=n-e;
    long long int sum=((e*(e+1))-(o*o));
    cout<<sum<<endl;
    return 0;
}