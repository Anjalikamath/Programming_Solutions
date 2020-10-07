class Solution {
public:
    void combinationUtil(vector<vector<int>>&ans, vector<int>& candidates, vector<int>&v, int idx, int tgt, int n)
    {
        if(tgt==0)
        {
            if(find(ans.begin(), ans.end(), v) == ans.end())
            {
                ans.push_back(v);
                
            }
            return;
        }
        
        if(tgt <= 0)return;
        if(idx >= n)return;
        
        for (int i = idx; i < n; i++)
        {
            v.push_back(candidates[i]);
            combinationUtil(ans, candidates, v, i+1, tgt - candidates[i], n);
            v.pop_back();
        }
        
    }
    
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        int n = candidates.size();
        
        if(n == 0)return ans;
        
        sort(candidates.begin(), candidates.end());
        vector<int>v;
        int idx=0;
        
        combinationUtil(ans, candidates, v, idx, target, n);
        return ans;
            
    }
};