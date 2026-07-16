// Question : Delete from the node at the end of the linked list
#include<bits/stdc++.h>
using namespace std;


struct Node {
    int data;
    Node* next;
    Node(int data1, Node* next1) {
        data=data1;
        next=next1;
    }
    Node(int data1) {
        data=data1;
        next=nullptr;
    }
};

void display(Node* head) {
    if(head == nullptr) cout << "Linked List is Empty" << endl;
    while(head != nullptr) {
        cout << head->data <<"--->";
        head=head->next;
    }
    cout << "nullptr";
}

Node* deleteAtEnd(Node* head) {
    if(head == nullptr) return nullptr;
    if(head->next == nullptr) {
        delete head;
        return nullptr;
    }
    Node* temp = head;
    while(temp->next->next != nullptr) {
        temp=temp->next;
    }
    Node* last = temp->next;
    temp->next=nullptr;
    delete last;
    return head;
}
int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    Node* head = new Node(arr[0]);
    Node* temp = head;
    for(int i = 1; i < arr.size(); i++) {
        temp->next=new Node(arr[i]);
        temp=temp->next;
    }
    head=deleteAtEnd(head);
    display(head);
    return 0;
}