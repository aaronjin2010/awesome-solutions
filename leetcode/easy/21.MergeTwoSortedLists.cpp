// 21. Merge Two Sorted Lists
#include <bits/stdc++.h>

using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode dummy;
        ListNode* cur = &dummy;
        while (l1 != nullptr && l2 != nullptr) {
            int mval = min(l1->val, l2->val);
            if (l1->val < l2->val) {
                l1 = l1->next;
            } else {
                l2 = l2->next;
            }
            ListNode* nxt = new ListNode(mval);
            cur->next = nxt;
            cur = cur->next;
        }
        while (l1 != nullptr) {
            ListNode* nxt = new ListNode(l1->val);
            l1 = l1->next;
            cur->next = nxt;
            cur = cur->next;
        }
        while (l2 != nullptr) {
            ListNode* nxt = new ListNode(l2->val);
            l2 = l2->next;
            cur->next = nxt;
            cur = cur->next;
        }
        cur->next = nullptr;
        return dummy.next;
    }
};