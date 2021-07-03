// 1. Two Sum
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& v, int n) {
        unordered_map<int, int> m;
        long vsize = v.size();
        for (long i = 0;i < vsize;++ i) {
            m[v[i]] = i;
        }
        auto mend = m.end();
        for (int i = 0;i < vsize;++ i) {
            int v2 = n - v[i];
            if (m.find(v2) != mend) {
                if (i != m[v2]) {
                    return {i, m[v2]};
                }
            }
        }
        return {0, -1};
    }
};