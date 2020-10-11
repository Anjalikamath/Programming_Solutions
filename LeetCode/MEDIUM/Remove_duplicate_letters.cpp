class Solution {
public:
    string removeDuplicateLetters(string s) {
    
        bool seen[26]={0};
        int last[26]={0};
        int n = s.size();
        
        for(int i=0;i<n;i++){
            last[s[i]-'a']=i;
        }
        
        string ans="";
        for(int i=0;i<n;i++){
            if(seen[s[i]-'a'])continue;
            else seen[s[i]-'a']=1;
            
            while(!ans.empty() && ans.back()>s[i] && i<last[ans.back()-'a']){
                seen[ans.back()-'a']=0;
                ans.pop_back();
                
            }
            ans+=s[i];
        }
        return ans;
    }
    
};