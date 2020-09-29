#include<iostream>

using namespace std;

int main(){
    string s;
    cin>>s;
    int n=s.size();
    if(n==1)cout<<s<<endl;
    else{
        string ans="";
        int arr[3];
        for(int i=0;i<3;i++)arr[i]=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1')arr[0]++;
            else if(s[i]=='2')arr[1]++;
            else if(s[i]=='3')arr[2]++;
        }
        for(int i=0;i<3;i++){
            int a=arr[i];
            //cout<<a<<"-";
            if(i==0){while(a--){ans+="1+";}}
            else if(i==1){while(a--){ans+="2+";}}
            else {
                while(a--){
                    ans+="3+";
                }
            }
        }
ans=ans.substr(0,n);
cout<<ans<<endl;
    }
    return 0;

}