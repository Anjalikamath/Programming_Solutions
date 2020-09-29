class Solution {
public:
    int myAtoi(string s) {
        int n=s.size();
        int i=0;
        while(i<n && s[i]==' '){
            i++;            
        }
        
        if(i==n)return 0;
        
        int f=1;
        
        if(s[i]=='-'){
            f=-1;
            i++;
        }
        else if(s[i]=='+')i++;
        long long int ans=0;
        while(i<n){
            
            if(s[i]<'0' || s[i]>'9' )
                return ans*f;
            
            ans=ans*10+(s[i]-'0');
            
            if(ans>INT_MAX){
                if(f==-1) return INT_MIN;
                return INT_MAX;
            }
            i++;
        }
        return ans*f;
        
        
    }
};