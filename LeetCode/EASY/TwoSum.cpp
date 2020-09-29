class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>v;
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++){
            int val=target-nums[i];
            if(m.find(val)!=m.end())return {m[val],i};
            else m[nums[i]]=i;
        }
        return {-1,-1};
    }
};