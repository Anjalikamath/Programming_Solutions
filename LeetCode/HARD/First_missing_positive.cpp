class Solution {
public:
    int shift(vector<int>&nums,int n){
        int i=0;
        for(int j=0;j<n;j++){
            if(nums[j]<=0){
                swap(nums[i],nums[j]);
                i++;
            }
        }
        return i;
    }
    
    int findmissing(vector<int>arr,int n){
        int i;
        for(i=0;i<n;i++){
            if(abs(arr[i])-1 < n && arr[abs(arr[i])-1] >0)
                arr[abs(arr[i])-1]=-arr[abs(arr[i])-1];
        }
        for(i=0;i<n;i++){
            if(arr[i]>0)return i+1;
        }
        return n+1;
        
    }
    
    int firstMissingPositive(vector<int>& nums) {
        
        int n=nums.size();
        if(n==0)return 1;
        else if(n==1){
            if(nums[0]<=0 )return 1;
            
        }
        int shiftval=shift(nums,n);
        if(shiftval==n)return 1;
        
        vector<int>arr(0,n-shiftval);
        for(int j=shiftval;j<n;j++)arr.push_back(nums[j]);
        for(int i=0;i<arr.size();i++)cout<<arr[i]<<" ";
        int val=findmissing(arr,arr.size());
        return val;
    }
};