class Solution {
public:
    int minDominoRotations(vector<int>& A, vector<int>& B) {
        
        vector<int>dp(7);
        vector<int>count_a(7),count_b(7);
        
        for(int i=0;i<A.size();i++){
            
            dp[A[i]]++;
            if(A[i]!=B[i])dp[B[i]]++;
            
            count_a[A[i]]++;
            count_b[B[i]]++;
            
        }
        
        for(int i=0;i<=6;i++){
            if(dp[i]==A.size()){
                
                return A.size()-max(count_a[i],count_b[i]);
            }
        }
        return -1;
    }
};