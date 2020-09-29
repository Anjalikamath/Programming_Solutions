#include<iostream>
#include<math.h>
using namespace std;

int main(){
    double n,m,a;
    cin>>n>>m>>a;

    //long long int pro=n*m;

    //long long int ans=ceil(n/a)*ceil(m/a);
    //cout<<ans<<endl;
cout<<(long long)ceil(n/a)*(long long)ceil(m/a)<<endl;
    return 0;
}