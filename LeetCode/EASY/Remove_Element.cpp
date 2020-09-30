class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        int n=nums.size();
        if(n==0)return 0;
        int len=0;
        int i=0;
        while(i<n){
            if(nums[i]==val)i++;
            else{
                nums[len]=nums[i];
                len++;
                i++;
            }
        }
        return len;
    }
};