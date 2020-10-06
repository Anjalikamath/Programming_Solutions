#include<iostream>

using namespace std;

int main(){
    string s;
    getline(cin,s);
    int arr[26];
    for(int i=0;i<26;i++)arr[i]=0;
    int i=1;
    while(i<s.size()){
        if(s[i]>='a' && s[i]<='z'){
            arr[s[i]-'a']++;
        }
        i++;
    }
    int ans=0;
    for(int i=0;i<26;i++){
        if(arr[i]>0)ans++;
    }
    cout<<ans<<endl;
    return 0;
}