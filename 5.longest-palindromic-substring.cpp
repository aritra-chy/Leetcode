/*
 * @lc app=leetcode id=5 lang=cpp
 *
 * [5] Longest Palindromic Substring
 */

// @lc code=start
class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        if(n==1) return s;

        int start = 0, maxLength = 1;

        for(int i=0; i<n; i++)
        {
            // odd length palindrome
            int left = i, right =i;
            while(left >= 0 && right < n && s[left] == s[right])
            {
                if(right - left + 1 > maxLength)
                {
                    start = left;
                    maxLength = right - left + 1;
                }
                left--;
                right++;
            }

            // even length palindrome
            left = i, right = i + 1;
            while(left >= 0 && right < n && s[left] == s[right])
            {
                if(right - left + 1 > maxLength)
                {
                    start = left;
                    maxLength = right - left + 1;
                }
                left--;
                right++;
            }
        }
       
        return s.substr(start, maxLength);
    }
   
};
// @lc code=end

