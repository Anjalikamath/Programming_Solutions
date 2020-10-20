class Solution {
public:
    int rob(vector<int>& nums) {
     
        int n=nums.size();
        if(n==0)return 0;
        if(n==1)return nums[0];
        if(n==2)return max(nums[0],nums[1]);
        
        int ans1=0;
        int incl=nums[0],excl=0;
        
        for(int i=1;i<n-1;i++){
            int newexcl=max(incl,excl);
            incl=excl+nums[i];
            excl=newexcl;
        }
        ans1=max(incl,excl);
        
        int ans2=0;
        incl=nums[1],excl=0;
        for(int i=2;i<n;i++){
            int newexcl=max(incl,excl);
            incl=nums[i]+excl;
            excl=newexcl;
        }
        ans2=max(incl,excl);
        return max(ans1,ans2);
        
    }
};