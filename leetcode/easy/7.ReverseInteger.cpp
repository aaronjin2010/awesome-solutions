// 7. Reverse Integer
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int reverse(int x) {
        bool f = false;
        if (x < 0) {
            f = true;
            if (x == INT_MIN) return 0;
            x *= -1;
        }
        int y = 0;
        while (x > 0) {
            if (y > (INT_MAX / 10)) return 0;
            y *= 10;
            y += x % 10;
            x /= 10;
        }
        if (f) {
            y *= -1;
        }
        return y;
    }
};