#include<iostream>
#include<math.h>
using namespace std;

int main(){
int n;
cin>>n;
int arr[5]={0};

//Calculate count of each group (from 1 to 4)
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    arr[x]++;
}
//group with 4 people cant be combined with any other group,so add the count to ans
int ans=arr[4];

//group with 3 people can be paired up with group containing 1 person. //the number of groups formed is the minimum of
//the number of groups with 3 and 1 people respectively
int val=min(arr[3],arr[1]);
ans+=val;
arr[1]-=val;
arr[3]-=val;
ans+=arr[3];
//Group with 2 people can be paired up with themselves.So find number of pairs possible
ans+=arr[2]/2;
arr[2]=arr[2]%2;

//The leftover people in group 1 and 2 can now be paired up together
if(arr[2]==1 && arr[1]>=2){
    ans+=1;
    arr[2]=0;
    arr[1]-=2;
}
//The leftover people
ans+=ceil((float)(arr[1]+arr[2])/4);
cout<<ans<<endl;



return 0;
}