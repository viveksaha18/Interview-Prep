// Question : Delete At the Begining
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

Node* deleteAtBegining(Node* head) {
    if(head == nullptr) {
        delete head;
        return nullptr;
    }
    // single node
    if(head->next == nullptr) {
        return nullptr;
    }
    Node* temp=head;
    head=head->next;
    delete temp;
    return head;
}


void display(Node* head) {
    if(head == nullptr) cout << "Linked List is Empty" << endl;
    while(head != nullptr) {
        cout << head->data <<"--->";
        head=head->next;
    }
    cout << "nullptr";
}

int main() {
    vector<int> arr={1, 2, 3, 4, 5};
    Node* head = new Node(arr[0]);
    Node* temp = head;
    for(int i = 1; i < arr.size(); i++) {
        temp->next = new Node(arr[i]);
        temp=temp->next;
    }
    head=deleteAtBegining(head);
    display(head);
    return 0;
}