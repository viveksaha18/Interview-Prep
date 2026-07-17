// Question : Reverse a LinkedList
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
    ListNode* reverseList(ListNode* head) {
        ListNode* temp=head;
        ListNode* front=head;
        ListNode* prev=nullptr;
        while(temp != nullptr) {
            front=temp->next;
            temp->next=prev;
            prev=temp;
            temp=front;
        }
        return prev;
    }
};


int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    ListNode* head = new ListNode(arr[0]);
    ListNode* temp=head;
    for(int i = 1; i < arr.size(); i++) {
        temp->next=new ListNode(arr[i]);
        temp=temp->next;
    }
    Solution obj;
    head=obj.reverseList(head);
    display(head);
    return 0;
}