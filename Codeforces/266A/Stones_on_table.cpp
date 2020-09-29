#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
string s;
cin>>s;

int ans=0;
for(int i=0;i<n;i++){
    if(i<n-1 && s[i]==s[i+1]){
        while(i<n-1 && s[i]==s[i+1]){ans++;i++;}
    }
}
cout<<ans<<endl;
return 0;

}