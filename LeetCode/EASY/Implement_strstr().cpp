class Solution {
public:
    int strStr(string haystack, string needle) {
      
        int n1=haystack.size(),n2=needle.size();
       
        if(n2==0)return 0;
        int j=0;
        for(int i=0;i<n1;i++){
            int k=i;
            if(haystack[i]==needle[j]){
                while(i<n1 && j<n2 && haystack[i]==needle[j]){
                    i++;
                    j++;
                }
                if(j==n2)return k;
                i=k;
                j=0;
            }
        }
        return -1;
    }
};