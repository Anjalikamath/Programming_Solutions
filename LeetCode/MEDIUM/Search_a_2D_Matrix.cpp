class Solution {
public:
    int binarySearch(vector<int>matrix,int target){
        int l=0,r=matrix.size();
        
        while(l<=r){
            
            int mid = l+(r-l)/2;
            if(matrix[mid]==target)return mid;
            else if(matrix[mid]<target)l=mid+1;
            else r=mid-1;
            
        }
        return -1;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int n=matrix.size();
        if(n==0)return 0;
        int m = matrix[0].size();
        if(m==0)return 0;
        for(int i =0;i<n;i++){
            if(matrix[i][0]<=target && matrix[i][m-1]>=target){
                int ans= binarySearch(matrix[i],target);
                if(ans==-1)return 0;
                return 1;
            }
            else continue;
        }
        return 0;
    }
};