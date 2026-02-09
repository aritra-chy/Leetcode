/*
 * @lc app=leetcode id=69 lang=cpp
 *
 * [69] Sqrt(x)
 */

// @lc code=start
class Solution {
public:
    int mySqrt(int x) {
        long r=x;        //apply Newton's method to find the square root of x
        while(r*r>x)
        {
            r=(r+x/r)/2;
        }
        return r;
    }
};
// @lc code=end

