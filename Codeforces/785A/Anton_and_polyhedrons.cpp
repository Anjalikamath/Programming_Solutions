#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    unordered_map<string,int>mapp;
    mapp["Tetrahedron"]=4;
    mapp["Cube"]=6;
    mapp["Octahedron"]=8;
    mapp["Dodecahedron"]=12;
    mapp["Icosahedron"]=20;

    int ans = 0;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        ans += mapp[s];
    }

    cout<<ans<<endl;
}