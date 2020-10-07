class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.size();
        int j=n-1;
        while(j >= 0 && s[j] == ' ') j--;
        
        if(j<0)return 0;
        
        int cnt=0;
        while(j >= 0 && s[j] != ' '){
            cnt++;
            j--;
            
        }
        return cnt;
    }
};