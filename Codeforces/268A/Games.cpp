#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int h[n],a[n];
    int ans = 0;
    
    for(int i = 0; i < n; i++)
    {
        cin>>h[i]>>a[i];
        for(int j = 0; j < i; j++)
        {
            if(h[j] == a[i])
                ans += 1;
            if(h[i] == a[j])
                ans += 1;
        }

    }
    cout<<ans<<endl;
    return 0;
}