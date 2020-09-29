#include<iostream>
using namespace std;

bool check(string s){
    int n=s.size();
    if(n<5)return 0;
    string a="hello";
    int j=0;
    int cnt=0;
    for(int i=0;i<n;i++){
        if(s[i]==a[j]){
            j++;
            cnt++;
            if(cnt==5)return 1;
        }
    }
    return 0;
}
int main(){
    string s;
    cin>>s;
    bool ans=check(s);
    if(ans)cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}