#include <iostream>

using namespace std;
struct Node {
    int data;
    Node* next;
};
Node* head = nullptr;
void Insert (int x) {
    Node* temp = new Node();
    temp->data = x;
    temp->next = head;
    head = temp;
    
}
void Dispaly(){
    Node* temp = head;
    cout<< " list is :";
    while(temp!=0) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << " \n";
}
void Reverse(){
    Node *prev,*current, *next;
    current = head;
    prev = NULL;
    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev= current;
        current = next;
    }
    head = prev;
}
int main() {
    Insert(2);
    Insert(4);
    Insert(6);
    Insert(8);
    Insert(10);
    Dispaly();
    Reverse();
    Dispaly();
}
