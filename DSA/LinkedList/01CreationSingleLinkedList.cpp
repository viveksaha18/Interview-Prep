#include<bits/stdc++.h>
using namespace std;

// Defination of Singly Linked List
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


// Displaying the elements in the Singly Linked List
void display(Node* head) {
    while(head != nullptr) {
        cout << head->data <<"--->";
        head=head->next;
    }
    cout << "nullptr";
}


int main() {
    // Using array to adding the elements in the linked list
    vector<int> arr = {1, 2, 3, 4, 5};
    Node* head = new Node(arr[0]);
    Node* temp = head;
    for(int i = 1; i < arr.size(); i++) {
        temp->next = new Node(arr[i]);
        temp = temp->next;
    }
    display(head);
    return 0;
}