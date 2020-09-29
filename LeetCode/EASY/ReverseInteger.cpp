/*Problem Description:
Given a 32-bit signed integer,reverse digits of the integer
Example 1:
Input: 123
Output: 321

Example 2:
Input: -123
Output: -321

Example 3:
Input: 120
Output: 21
Note:
Assume we are dealing with an environment  which could only store 
integers within the 32-bit signed integer range: [−231,  231 − 1]. 
For the purpose of this problem, assume that your function returns 0 when the reversed integer overflows.
*/

class Solution {
public:
    int reverse(int x) {
        
        bool sign=false;
        if(x<=INT_MIN || x>=INT_MAX)return 0;
        if(x<0){sign=true;x=-x;}
        long long int ans=0;
        while(x!=0){
            int rem=x%10;
            x=x/10;
            ans=ans*10+rem;
            if(ans>INT_MAX)return 0;
        }
        if(sign)ans=-ans;
        return ans;
        
    }
};