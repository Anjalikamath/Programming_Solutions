class Solution {
public:
    void permutation(vector<vector<int>>&ans,vector<int>&nums,int n,int start){
        if(start == n)
        {
            ans.push_back(nums);
            return;
        }

        for (int i = start; i < n;i++)
        {
            
            swap(nums[i],nums[start]);
            permutation(ans,nums,n,start+1);
            swap(nums[i],nums[start]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        
        int n=nums.size();
        vector<vector<int>>ans;
        vector<int>v;
        int start=0;
        permutation(ans,nums,n,start);
        return ans;
        
    }
};