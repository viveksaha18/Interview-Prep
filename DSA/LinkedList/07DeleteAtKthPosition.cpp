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

Node* deleteAtKthPosition(Node* head, int k) {
    if(head == nullptr && k <= 0) {
        return nullptr;
    }

    
    if(k == 1) {
        Node* temp=head;
        head=head->next;
        delete temp;
        return head;
    }
    Node* curr = head;
    Node* prev = nullptr;
    int cnt = 0;
    while(curr != nullptr && cnt != k-1) {
        prev=curr;
        curr=curr->next;
        cnt++;
    }
    
    // k is greater than the list
    if(curr == nullptr) {
        cout << "K is greater than the list size" << endl;
        return head;
    }
    
    prev->next=curr->next;
    delete curr;
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
    int k;
    cout << "Enter the position you want to delete the node: " << endl;
    cin >> k;
    Node* head = new Node(arr[0]);
    Node* temp = head;
    for(int i = 1; i < arr.size(); i++) {
        temp->next = new Node(arr[i]);
        temp=temp->next;
    }
    head=deleteAtKthPosition(head, k);
    display(head);
    return 0;
}