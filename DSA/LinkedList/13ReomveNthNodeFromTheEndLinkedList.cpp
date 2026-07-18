#include<bits/stdc++.h>
using namespace std;


 struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 
class Solution {
public:
int cntSize(ListNode* head) {
    ListNode* temp = head;
    int size = 0;
    while(temp != nullptr) {
        size = size + 1;
        temp = temp->next;
    }
    return size;
}

ListNode* removeKthNode(ListNode* head, int k) {
    if(head->next == nullptr) {
        return nullptr;
    }
    if(k==0){
    ListNode* temp=head;
    head=head->next;
    delete temp;
    return head;
}
    ListNode* temp = head;
    ListNode* prev = nullptr;
    int cnt = 0;
    while(temp != nullptr && cnt != k) {
        prev=temp;
        temp = temp->next;
        cnt = cnt + 1;
    }
    prev->next = temp->next;
    delete temp;
    return head;
}

    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int size = cntSize(head);
        int k = size - n;
        head=removeKthNode(head, k);
        return head;
    }
};

// Displaying the elements in the Singly Linked List
void display(ListNode* head) {
    while(head != nullptr) {
        cout << head->val <<"--->";
        head=head->next;
    }
    cout << "nullptr";
}
int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    ListNode* head = new ListNode(arr[0]);
    ListNode* temp = head;
    for(int i = 1; i < arr.size(); i++) {
        temp->next = new ListNode(arr[i]);
        temp=temp->next;
    }
    int k = 2;
    Solution s;
    s.removeNthFromEnd(head, k);
    display(head);
    return 0;
}