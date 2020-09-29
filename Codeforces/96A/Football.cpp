#include<iostream>
using namespace std;

bool check(string s){
    int n=s.size();
    int cnt=0;
    for(int i=0;i<n-1;i++){
        if(s[i]==s[i+1]){
            while(i<n && s[i]==s[i+1]){
                
                cnt++;
                //cout<<i<<"-"<<cnt<<" ";
                i++;
                if(cnt>=6)return 1;
            }
            cnt=0;
        }
        else continue;
    }
    return 0;
}

int main(){
    string s;
    cin>>s;
    bool ans=check(s);
    if(ans)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}