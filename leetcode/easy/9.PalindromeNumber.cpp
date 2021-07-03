// 9. Palindrome Number
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        long y = 0;
        long z = x;
        while (x > 0) {
            y *= 10;
            y += x % 10;
            x /= 10;
        }
        if (y == z) return true;
        else return false;
    }
};