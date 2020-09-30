class Solution {
public:
    bool contains(string s,vector<string>&wordDict){
        for(int i=0;i<wordDict.size();i++){
            if(wordDict[i].compare(s)==0)return true;
        }
        return false;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
     if(wordDict.size()==0)return 0;
        
        int n=s.size();
         bool dp[n+1]; 
    memset(dp, 0, sizeof(dp));
        for(int i=1;i<=n;i++){
            if(dp[i]==0 && contains(s.substr(0,i),wordDict))dp[i]=1;
            
            
            
            if(dp[i]==1){
                if(i==n)return true;
                for(int j=i+1;j<=n;j++){
                    if(dp[j]==0 && contains(s.substr(i,j-i),wordDict))dp[j]=1;
                    if(j==n && dp[j])return true;
                }
            }
            
        }
        return false;
        
        
    }
};