class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix.size();
        
        vector<int>v;
        
        if(n==0)return v;
        int m = matrix[0].size();
       
        int i = 0;
        int j = 0;
        while(i<n && j<m){
            for(int l = j; l < m; l++)
            {
                v.push_back(matrix[i][l]);
            }
            i++;
            
            for(int r = i; r < n; r++)
            {
                v.push_back(matrix[r][m-1]);
            }
            m--;
            
            if(j < m && i < n)
            {
                for(int l = m-1 ;l >= j; l--)
                {
                    v.push_back(matrix[n-1][l]);
                }
                n--;
                
            
                for(int r = n-1; r >=i; r--)
                {
                    v.push_back(matrix[r][j]);
                }
                j++;
            }
            
        }
        return v;
    }
};