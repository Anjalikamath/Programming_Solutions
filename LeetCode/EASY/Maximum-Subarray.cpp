class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int n=nums.size();
        if(n==0)return 0;
        if(n==1)return nums[0];
        long long int sum=0,maxsum=INT_MIN;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            maxsum=max(maxsum,sum);
            if(sum<0)sum=0;
            
        }
        if(maxsum==INT_MIN){
            for(int i=0;i<n;i++){
                if(maxsum<nums[i])maxsum=nums[i];
            }
        }
        return maxsum;
        
    }
};