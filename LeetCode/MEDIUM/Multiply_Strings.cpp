class Solution {
public:
    string multiply(string num1, string num2) {
        
        
        int n1 = num1.size();
        int n2 = num2.size();
        
        int result[n1+n2];
        
        for (int i = 0; i < n1 + n2; i++)
            result[i]=0;
        
        for(int i = n1 - 1; i >=0; i--){
            
            for(int j = n2 - 1; j >= 0; j--){
                
                result[i + j + 1] += (num1[i] - '0') * (num2[j] - '0');
                result[i + j] += result[i + j + 1] / 10;
                result[i + j + 1] %= 10;
                
                 
            }
        }

        //find first non-zero number in result[]
        int idx = 0;
        while(idx < n1 + n2 && result[ idx ] == 0) idx ++;
        
        if(idx == n1 + n2) return "0";
        
        string ans = "";
        
        for(int i = idx; i < n1 + n2; i++){
            ans+=to_string(result[i]);
            
        }
       return ans;
    }
};
        
