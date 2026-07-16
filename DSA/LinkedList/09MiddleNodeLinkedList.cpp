// Question : Middle of the linkedlist
#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// Brute Force Solution :
// Find the size of the linked list and then find middle element and then traverse till middleelement
class Solution {
public:
int sizeofLinkedList(ListNode* head) {
    int size = 0;
    ListNode* temp = head;
    while(temp != nullptr) {
        size = size + 1;
        temp = temp->next;
    }
    return size;
}
ListNode* middleNode(ListNode* head, int size) {
    int middleElement = size/2;
    int cnt = 0;
    ListNode* temp = head;
    while(cnt != middleElement) {
        temp=temp->next;
        cnt++;
    }
    return temp;
}
    ListNode* middleNode(ListNode* head) {
        int size = sizeofLinkedList(head);
        cout << size;
        head=middleNode(head, size);
        return head;
    }
};


// Optimal Solution
class Solution1 {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* fast = head;
        ListNode* slow = head;
        while(fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};
int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    ListNode* head = new ListNode(arr[0]);
    ListNode* temp = head;
    for(int i = 1; i < arr.size(); i++) {
        temp->next = new ListNode(arr[i]);
        temp=temp->next;
    }
    Solution obj;
    ListNode* ans = obj.middleNode(head);
    cout << "From the Naive Approach: " << ans->val << endl;
    Solution1 obj1;
    ListNode* ans1 = obj1.middleNode(head);
    cout << "From Optimal Approach: " << ans1->val << endl;
    return 0;
}