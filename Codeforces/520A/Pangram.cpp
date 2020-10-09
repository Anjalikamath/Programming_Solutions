#include<iostream>
using namespace std;

int main(){
    int n;
    string s;
    cin>>n;
    cin>>s;
    if(n < 26)cout<<"NO\n";
    else {

        int arr[26];
        for (int i = 0; i < 26; i++)
            arr[i] = 0;
        for(int i = 0; i < s.size(); i++){

            char x = tolower(s[i]);
           // cout<<x;
            arr[x-'a']++;
        }
        bool f = 1;
        for(int i = 0; i < 26; i++){
            //cout<<arr[i];
            if(arr[i]==0){
                f=0;
                break;
            }
        }
        if(f==1)cout<<"YES\n";
        else cout<<"NO\n";


    }


    return 0;
}