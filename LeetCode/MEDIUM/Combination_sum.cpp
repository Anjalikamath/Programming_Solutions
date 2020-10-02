class Solution {
public:
    void helper(vector<int>candidates,int tgt,vector<vector<int>>&ans,vector<int>&v,int n,int &idx){
        if(tgt==0){
            ans.push_back(v);
            return;
        }
        if(tgt<0)return;
        for(int i=idx;i<n;i++){
         
                v.push_back(candidates[i]);
                helper(candidates,tgt-candidates[i],ans,v,n,i);
                v.pop_back();    
                                       
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        int n=candidates.size();
        if(n==0)return ans;
        int idx=0;
        vector<int>v;
        helper(candidates,target,ans,v,n,idx);
 
        return ans;
        
    }
};
