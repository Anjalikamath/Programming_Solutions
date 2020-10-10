bool comparator(const vector<int>&p1,const vector<int>&p2)
{
    return p1[1]<p2[1];
}
class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& arr) {
        
        int n = arr.size();
        if(n == 0) return 0;
        if(n == 1) return 1;
        
        sort(arr.begin(),arr.end(),comparator);
        
        int arrows = 1;
        int value = arr[0][1];
        
        for(int i = 1; i < n; i++){
            
            if(arr[i][0] > value)
            
            {
                arrows++;
                value = arr[i][1];
            }
        }
        
        return arrows;
        
        
    }
};

 