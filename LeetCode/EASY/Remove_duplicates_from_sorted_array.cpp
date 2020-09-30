class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int n=nums.size();
        if(n==0)return 0;
        int len=1;
        int i=1;
        while(i<n){
            if(nums[i]==nums[i-1]){
                while(i<n && nums[i]==nums[i-1])i++;
            }
            else{
                nums[len]=nums[i];
                len++;
                i++;
            }
        }
        return len;
    }
};