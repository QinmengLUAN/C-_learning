/*
20. Valid Parentheses
Easy

Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
 

Example 1:

Input: s = "()"
Output: true
Example 2:

Input: s = "()[]{}"
Output: true
Example 3:

Input: s = "(]"
Output: false
Example 4:

Input: s = "([)]"
Output: false
Example 5:

Input: s = "{[]}"
Output: true
*/
class Solution {
public:
    bool isValid(string s) {
        vector<char> stack;
        for (char ch : s) {
            if (ch == '(' || ch == '[' || ch =='{') {
                stack.push_back(ch);
            } else if (stack.empty()) {
                return false;
            } else if (ch == ')' && stack.back() == '(') {
                stack.pop_back();
            } else if (ch == ']' && stack.back() == '[') {
                stack.pop_back();
            } else if (ch == '}' && stack.back() == '{') {
                stack.pop_back();
            } else {
                stack.push_back(ch);
            }
        }
        if (!stack.empty()) {
            return false;
        } else {
            return true;
        }
    }
};