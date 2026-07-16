// Question: Find the size of the linked list
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

int sizeofLinkedList(Node* head) {
    Node* temp = head;
    int size = 0;
    while(temp != nullptr) {
        size=size+1;
        temp=temp->next;
    }
    return size;
}
int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    Node* head = new Node(arr[0]);
    Node* temp = head;
    for(int i = 1; i < arr.size(); i++) {
        temp->next = new Node(arr[i]);
        temp=temp->next;
    }
    int size = sizeofLinkedList(head);
    cout << "Size of LinkedList: " << " " << size << endl;
    return 0;
}