#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;
    Node(int value) {
        data = value;
        next = prev = NULL;
    }
};

Node* CreateDLL(int arr[], int index, int size, Node* back) {
    if (index == size)
        return NULL;

    Node* temp = new Node(arr[index]);
    temp->prev = back;
    temp->next = CreateDLL(arr, index + 1, size, temp);
    return temp;
}

int main() {
    Node* head = NULL;

    int arr[] = {1, 2, 3, 4, 5};
    head = CreateDLL(arr, 0, 5, NULL); // এখানে `size = 5` দেওয়া হয়েছে

    // delete at start
    if (head != NULL) {
        // যদি শুধু একটাই নোড থাকে
        if (head->next == NULL) {
            delete head;
            head = NULL;
        } else { 
            Node* temp = head;
            head = head->next;
            head->prev = NULL; // নতুন head-এর `prev` NULL করতে হবে
            delete temp;
        }
    }

    Node* trav = head;
    while (trav) {
        cout << trav->data << " ";
        trav = trav->next;
    }

    return 0;
}