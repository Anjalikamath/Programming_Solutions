class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        int n=strs.size();
        int minsize=INT_MAX;
        
        if(n==0)return "";
        
        //get min length of string in str.Length of prefix will never exceed this minlength
        for(int i=0;i<n;i++){
            if(strs[i].size()<minsize){
                minsize=strs[i].size();
            }
        }
        
        string ans="";//to store the final prefix string
       
        for(int k=0;k<minsize;k++)
        {
            int i=0;
            for(i=0;i<n-1;i++){
                if(strs[i][k]!=strs[i+1][k])
                    return ans;
                
            }
           ans+=strs[0][k];
            
        }
        return ans;
    }
};