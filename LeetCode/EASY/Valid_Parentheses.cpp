class Solution {
public:
    bool isValid(string s) {
        int n=s.size();
        if(n==0)return 1;
        stack<char>st;
        for(int i=0;i<n;i++){
            if(s[i]=='(' || s[i]=='[' || s[i]=='{')st.push(s[i]);
            else{
                if(s[i]=='}'){
                    if(st.empty() || st.top()!='{')return 0;
                        else st.pop();
                }
                else if(s[i]==']'){
                    if(st.empty() || st.top()!='[')return 0;
                        else st.pop();
                }
                else if(s[i]==')'){
                    if(st.empty() || st.top()!='(')return 0;
                        else st.pop();
                }
            }
        }
        if(st.empty())
            return 1;
        return 0;
        
    }
};