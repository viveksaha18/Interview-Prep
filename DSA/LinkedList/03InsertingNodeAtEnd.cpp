// Question: Insert an element at the end of the linked of the linked list
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

Node* insertAtEnd(Node* head, int element) {
    Node* temp = head;
    while(temp->next != nullptr) {
        temp=temp->next;
    }
    temp->next = new Node(element);
    return head;
}



// Displaying the elements in the Singly Linked List
void display(Node* head) {
    if(head == nullptr) cout << "Linked List is Empty" << endl;
    while(head != nullptr) {
        cout << head->data <<"--->";
        head=head->next;
    }
    cout << "nullptr";
}


int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    Node* head = new Node(arr[0]);
    Node* temp=head;
    for(int i = 1; i < arr.size(); i++) {
        temp->next=new Node(arr[i]);
        temp=temp->next;
    }
    cout << "Enter the element to be inserted at the end: " << endl;
    int element;
    cin >> element;
    head=insertAtEnd(head, element);
    display(head);
    return 0;
}