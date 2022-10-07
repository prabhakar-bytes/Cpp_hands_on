#include<iostream>

using namespace std;

struct Node {
    int data;
    Node *next;
    Node(int data) {
        this-> data = data;
        next = NULL;
    }
};

// 1  <--2   <--3 
class LinkedList {
    Node *head;
    public:
    LinkedList() { head = NULL; }
    void reverse() {
        Node *curr, *prev, *next;
        curr = head;
        prev = next = NULL;
        while(curr != NULL) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        head = prev;

    }
    void Print(){
        Node *tmp = head;
        while(tmp != NULL) {
            cout<< tmp->data << "  " ;
            tmp = tmp->next;
        }
    }

    void Push( int data) {
        Node *tmp = new Node( data);
        tmp ->next = head;
        head = tmp;

    }
};

int main() {
    LinkedList ll;
    ll.Push(10);
    ll.Push(20);
    ll.Push(30);
    ll.Push(40);
    ll.Print();
    ll.reverse();
    cout<<endl;
    ll.Print();
}