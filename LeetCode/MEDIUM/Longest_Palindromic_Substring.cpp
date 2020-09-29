/*Problem Description
Given a string s, find the longest palindromic substring in s. You may assume that the maximum length of s is 1000.

Example 1:
Input: "babad"
Output: "bab"
Note: "aba" is also a valid answer.

Example 2:
Input: "cbbd"
Output: "bb"
*/
class Solution {
public:
    int expand(string s,int l,int r){
        while(l>=0 && r<s.size() && s[l]==s[r]){
            l--;
            r++;
        }
        return (r-l-1);
    }
    string longestPalindrome(string s) {
        int n=s.size();
        int start=0,end=0;
        for(int i=0;i<n;i++){
            int len1=expand(s,i,i);
            int len2=expand(s,i,i+1);
           int len=max(len1,len2);
            if(len>(end-start)){
                start=i-(len-1)/2;
                end=i+len/2;
            }
        }
        return s.substr(start,end-start+1);
    }
};