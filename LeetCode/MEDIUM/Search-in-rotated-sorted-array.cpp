class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int n = nums.size();
        
        if(n == 0)return -1;
        
        int l = 0, r = n-1;
        while(l < r){
            
            int mid = l + (r - l)/2;
            if ( nums[mid] > nums [r])l = mid + 1;
            else r = mid ;
        }
        
        int start = l;
        l = 0, r = n-1;
        
        if(target >= nums[start] && target <= nums[r] )
            l=start;
        else r=start;
        
        while(l <= r){
            
            int mid = l + (r - l)/2;
            if(nums[mid] == target )return mid;
            else if(nums[mid] < target )l=mid+1;
            else r=mid-1;
        }
        return -1;
    }
};
