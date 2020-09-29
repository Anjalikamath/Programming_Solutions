class Solution {
public:
   int getval(char s){
       
        if(s=='I')return 1; 
        else if(s=='V')return 5;
        else if(s=='X')return 10;
        else if(s=='L')return 50;
        else if(s=='C')return 100;
        else if(s=='D')return 500;
        else if(s=='M')return 1000;
        return -1;
   }
    int romanToInt(string s) {
        
        int n=s.size();
        //int i=0;
        int ans=0;
        for(int i=0;i<n;i++){
            int x=getval(s[i]);
            int y=0;
            if(i<n-1)y=getval(s[i+1]);
            if(y>x){
                ans+=(y-x);
                i++;
            }
            else ans+=x;
        }
        return ans;
        
    }
};