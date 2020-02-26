#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
};
Node *head=nullptr;

void Insert (int x, int n) {
    Node *temp1 = new Node();
    temp1 -> data = x;
    temp1 -> next = nullptr;
    if (n == 1) {
        temp1 -> next = head;
        head = temp1;
        return ;
    }
    else {
        Node *temp2 = head;
        for(int i=0; i < n-2; i++) {
            temp2 = temp2->next;
        }
        temp1->next = temp2->next;
        temp2->next = temp1;
    }
}
void display() {
    Node* temp1 = head;
    while (temp1 != nullptr) {
        cout << temp1->data <<" ";
        temp1 = temp1 ->next;
    }
}
int main()
{
    Insert(5,1);
    Insert(7,2);
    Insert(3,1);
    Insert(9,3);
    display();
}
