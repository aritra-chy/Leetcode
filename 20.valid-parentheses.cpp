/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 */

// @lc code=start
class Solution {
public:
    bool isValid(string s) {
        string st;
        for(char c:s)
        {
            if(c=='(' || c=='{' || c=='[') st.push_back(c);
            else
            {
                if(st.empty()) return false;
                char top=st.back();
                if ((c == ')' && top == '(') || 
                    (c == ']' && top == '[') || 
                    (c == '}' && top == '{')) 
                    {
                    st.pop_back(); // Pop from "stack"
                    } 
                    else return false;  
            }
        }
        return st.empty();
        
    }
};
// @lc code=end

