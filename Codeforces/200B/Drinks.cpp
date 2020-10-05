#include<iostream>
#include<iomanip>
using namespace std;

int main(){

    double ans=0;
    int n;
    cin>>n;
    int nn=n;
    while(nn--){
        int a;
        cin>>a;
        ans+=a;
    }

    ans=ans/n;
    printf("%.12lf\n",ans);
    return 0;

}
