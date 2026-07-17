#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;

    ListNode() {
        val = 0;
        next = nullptr;
    }

    ListNode(int x) {
        val = x;
        next = nullptr;
    }

    ListNode(int x, ListNode* nextNode) {
        val = x;
        next = nextNode;
    }
};

class Solution {
public:
    bool detectCycle(ListNode* head) {

        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != nullptr && fast->next != nullptr) {

            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast)
                return true;
        }

        return false;
    }
};

int main() {

    vector<int> arr = {1, 2, 3, 4, 5};

    // Create Linked List
    ListNode* head = new ListNode(arr[0]);
    ListNode* temp = head;

    for (int i = 1; i < arr.size(); i++) {
        temp->next = new ListNode(arr[i]);
        temp = temp->next;
    }

    // Uncomment these lines to create a cycle:
    // head->next->next->next->next->next = head->next;
    // This makes: 5 -> 2

    Solution obj;
    bool ans = obj.detectCycle(head);

    if (ans)
        cout << "Cycle Detected";
    else
        cout << "No Cycle";

    return 0;
}