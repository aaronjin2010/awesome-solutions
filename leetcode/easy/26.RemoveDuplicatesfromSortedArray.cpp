// 26. Remove Duplicates from Sorted Array
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        long j = 0;
        long size = nums.size();
        if (size <= 1) return size;
        for (long i = 0;i < size;++ i) {
            if (nums[i] != nums[j]) {
                ++ j;
                nums[j] = nums[i];
            }
        }
        return j + 1;
    }
};