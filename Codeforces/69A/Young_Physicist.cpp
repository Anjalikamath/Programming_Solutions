#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int sum1=0,sum2=0,sum3=0;
    while(n--){
        int a,b,c;
        cin>>a>>b>>c;
        sum1+=a;
        sum2+=b;
        sum3+=c;
    }
    if(sum1==0 && sum2==0 && sum3==0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;


    return 0;
}