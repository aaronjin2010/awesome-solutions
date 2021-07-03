// 12. Integer to Roman
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    string intToRoman(int n) {
        string tab[4][10] = {{"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"},
                            {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"},
                            {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"},
                            {"", "M", "MM", "MMM", "MMMM", "MMMMM", "MMMMMM", "MMMMMMM", "MMMMMMMM", "MMMMMMMMM"}};
        
        int a, b, c, d;
        a = n / 1000;
        n %= 1000;
        b = n / 100;
        n %= 100;
        c = n / 10;
        n %= 10;
        d = n;

        return tab[3][a] + tab[2][b] + tab[1][c] + tab[0][d];
    }
};