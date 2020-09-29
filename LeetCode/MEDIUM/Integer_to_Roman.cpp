class Solution {
public:
    
    string intToRoman(int n) {
       string ans="" ;
        int num[]={1,4,5,9,10,40,50,90,100,400,500,900,1000};
        string val[]={"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
        
        
        int i=12;
        //start from the highest value possible
        while(n){
            //if n is divisible by num[i],add val[i] that many number of times
            int rem=n/num[i];
           
            while(rem--){
                ans+=val[i];
            }
            //get the remainder as n
            n=n%num[i];
            i--;
        }
        return ans;
    }
};