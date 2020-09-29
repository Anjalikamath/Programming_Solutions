/*Given a string s,find the length of the longest substring without 
repeated characters 
Example 1:
Input: s="abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.

Example 2:
Input: s = "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.

Example 3:
Input: s = "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3.
Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.

Example 4:
Input: s = ""
Output: 0

Constraints:

0 <= s.length <= 5 * 104
s consists of English letters, digits, symbols and spaces.
*/


class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int ans=0;
        map<char,int>m;
        int i=0,j=0;
        while(j<n){
            //if character not visited,mark it as visited
            if(m[s[j]]==0)m[s[j]]=1;
            
            //otherwise , mark the previously visited chars as not visited till 
            //s[i]!=s[j];
            else{
                ans=max(ans,j-i);
                while(i<n && s[i]!=s[j])
                {
                    m[s[i]]=0;
                    i++;
                }
                i++;
            }
            j++;
        }
        return max(ans,j-i);
    }
};