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
void Reverse(Node *p){
    if (p->next == NULL)
    {
        head = p;
        return;
    }
    Reverse(p->next);
    Node *q = p->next;
    q->next = p;
    p->next = NULL;
}
int main() {
    Insert(2);
    Insert(4);
    Insert(6);
    Insert(8);
    Insert(10);
    Dispaly();
    Reverse(head);
    Dispaly();
}
