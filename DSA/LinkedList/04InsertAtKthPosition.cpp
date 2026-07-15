// Question : Insert a new node at k position 
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


Node* insertAtKthPosition(Node* head, int k) {
    int data;
    cout << "Enter the value of node you want to insert: " << endl;
    cin >> data;
    if(k == 1) {
        Node* newNode = new Node(data);
        newNode->next=head;
        return newNode;
    }
    int cnt = 0;
    Node* temp=head;
    while(temp != nullptr && cnt != k-2) {
        temp=temp->next;
        cnt++;
    }
    if(temp == nullptr) {
        cout << "Invalid Position" << endl;
        return head;
    }
    
    Node* newNode = new Node(data);
    newNode->next = temp->next;
    temp->next=newNode;
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
    Node* temp = head;
    for(int i = 1; i < arr.size(); i++) {
        temp->next = new Node(arr[i]);
        temp=temp->next;
    }
    int k;
    cout << "Enter the position you want to insert the new node" << endl;
    cin >> k;
    head=insertAtKthPosition(head, k);
    display(head);
    return 0;
}