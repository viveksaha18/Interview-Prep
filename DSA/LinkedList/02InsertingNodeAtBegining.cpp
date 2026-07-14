// Question: Insert an element at the start of the linked list
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
    } 
};

// Function for inserting the node at the begining of the linked list
Node* insertionAtBegining(Node* head, int element) {
    Node* newNode = new Node(element);
    newNode->next=head;
    return newNode;
}

// Displaying the elements in the Singly Linked List
void display(Node* head) {
    while(head != nullptr) {
        cout << head->data <<"--->";
        head=head->next;
    }
    cout << "nullptr";
}
int main() {
    vector<int> arr = {1, 2, 3, 4};
    Node* head = new Node(arr[0]);
    Node* temp = head;
    for(int i = 1; i < arr.size(); i++) {
        temp->next = new Node(arr[i]);
        temp=temp->next;
    }
    cout << "Enter the element to be inserted at the begining: ";
    int element;
    cin >> element;
    head=insertionAtBegining(head, element);
    display(head);
    return 0;
}