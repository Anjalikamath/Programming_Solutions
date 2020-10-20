class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        vector<string>ans;
        if(s.size()<10)return ans;
        unordered_map<string,int>m;
        
        for(int i=0;i<=s.size()-10;i++){
            
            string str=s.substr(i,10);
            m[str]++;
            
        }
        
        for(auto it=m.begin();it!=m.end();it++){
            
            if(it->second>1)ans.push_back(it->first);
            
        }
        return ans;
        
    }
};