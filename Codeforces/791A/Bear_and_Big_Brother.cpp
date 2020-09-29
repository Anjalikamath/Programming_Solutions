#include<iostream>
using namespace std;
int main(){
    long long int a,b;
    cin>>a>>b;
    int n=0;
    while(a<=b){
        a=a*3;
        b=b*2;
        n++;
    }
    cout<<n<<endl;
    return 0;
}