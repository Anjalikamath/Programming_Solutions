class Solution {
public:
    bool buddyStrings(string A, string B) {
        
        if(A.size() != B.size())
            return 0;
        if(A.size() == 0 || B.size() == 0)
            return 0;
        
        int freq[26] = {0};
        bool no_swap = false;
        int first = -1, second = -1;
        
        for(int i = 0;i < A.size(); i++){
            
            if(A[i] != B[i]){
                
                if(first == -1){
                    first = i;
                }
                else if( second == -1){
                    second = i;
                }
                else return 0;
                
            }
            
            freq[A[i]-'a']++;
            if(freq[A[i]-'a'] > 1){
                no_swap = true;
            }
             
        }
        
        return ( ((first != -1) && (second != -1) && (A[first]==B[second]) &&(A[second] == B[first])) ||
               (first == -1 && no_swap == true) );
        
    }
};