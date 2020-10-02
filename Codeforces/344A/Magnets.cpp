#include<iostream>
using namespace std;

int main(){
    int n;
    int ans=1;
    cin>>n;
    string s[n];
   for(int i=0;i<n;i++)cin>>s[i];
   for(int i=1;i<n;i++){
       if(s[i-1][1]==s[i][0])ans++;
   }
cout<<ans<<endl;
    return 0;
}