// 20. Valid Parentheses
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> sta;
        for (long i = 0;i < s.size();++ i) {
            switch (s[i]) {
                case '(': {
                    sta.push(')');
                    break;
                }
                case '[': {
                    sta.push(']');
                    break;
                }
                case '{': {
                    sta.push('}');
                    break;
                }
                case ')':
                case ']':
                case '}': {
                    if (sta.empty()) {
                        return false;
                    }
                    if (sta.top() != s[i]) {
                        return false;
                    } else {
                        sta.pop();
                    }
                }
            }
        }
        if (sta.empty()) {
            return true;
        } else {
            return false;
        }
    }
};