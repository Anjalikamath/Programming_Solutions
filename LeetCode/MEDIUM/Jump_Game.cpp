class Solution {
public:
    bool canJump(vector<int>& arr) {
        int n=arr.size();
        if(n==0)return 0;
        if(n==1)return 1;
       int last=n-1;
        for(int i=n-1;i>=0;i--){
            if(i+arr[i]>=last)last=i;
        }
        return last==0;
    }
};