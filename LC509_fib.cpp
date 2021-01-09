/*
509. Fibonacci Number
Easy

The Fibonacci numbers, commonly denoted F(n) form a sequence, called the Fibonacci sequence, such that each number is the sum of the two preceding ones, starting from 0 and 1. That is,

F(0) = 0, F(1) = 1
F(n) = F(n - 1) + F(n - 2), for n > 1.
Given n, calculate F(n).

 

Example 1:

Input: n = 2
Output: 1
Explanation: F(2) = F(1) + F(0) = 1 + 0 = 1.
Example 2:

Input: n = 3
Output: 2
Explanation: F(3) = F(2) + F(1) = 1 + 1 = 2.
Example 3:

Input: n = 4
Output: 3
Explanation: F(4) = F(3) + F(2) = 2 + 1 = 3.
*/
class Solution {
public:
    // recursion
    int fib1(int n) {
        if (n == 1 || n == 0) {
            return n;
        } else {
            return fib(n-1) + fib(n-2);
        }
    }

    // iteration
    int fib(int n) {
        if (n < 2) return n;
        int n1 = 0;
        int n2 = 1;
        int tmp;
        for (int i=1; i<n; i++) {
            tmp = n2 + n1;
            n1 = n2;
            n2 = tmp;
        }
        return tmp;
    }
};
