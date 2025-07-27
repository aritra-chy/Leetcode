/*
 * @lc app=leetcode id=67 lang=cpp
 *
 * [67] Add Binary
 */

// @lc code=start
class Solution {
public:
    string addBinary(string a, string b) {
        
        int carry = 0, i = a.size() - 1, j = b.size() - 1;
        string ans = "";
        while (i >= 0 || j >= 0 || carry) {
            carry += (i >= 0) ? a[i--] - '0' : 0;
            carry += (j >= 0) ? b[j--] - '0' : 0;
            ans += carry % 2 + '0';
            carry /= 2;
        }
        reverse(ans.begin(), ans.end());
        return ans;
        
    }
};
// @lc code=end

