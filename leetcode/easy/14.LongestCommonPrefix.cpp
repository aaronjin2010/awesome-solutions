// 14. Longest Common Prefix
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string first = strs[0];
        string prefix;
        for (long i = 0;i < first.size();++ i) {
            bool abort = 0;
            for (long j = 1;j < strs.size();++ j) {
                if (strs[j][i] != first[i]) {
                    abort = true;
                    break;
                }
            }
            if (! abort) {
                prefix.push_back(first[i]);
            } else break;
        }
        return prefix;
    }
};