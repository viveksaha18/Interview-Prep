#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast) {
                slow = head;

                while(slow != fast) {
                    slow = slow->next;
                    fast = fast->next;
                }

                return slow;
            }
        }

        return nullptr;
    }
};

int main() {

    // Nodes
    ListNode* n1 = new ListNode(3);
    ListNode* n2 = new ListNode(2);
    ListNode* n3 = new ListNode(0);
    ListNode* n4 = new ListNode(-4);

    // Normal Linked List
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;

    // Create Cycle
    n4->next = n2;

    Solution s;

    ListNode* ans = s.detectCycle(n1);

    if(ans)
        cout << "Cycle starts at node: " << ans->val;
    else
        cout << "No Cycle";

    return 0;
}