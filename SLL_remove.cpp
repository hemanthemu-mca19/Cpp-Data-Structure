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
void Delete(int n) {
    Node* temp1 = head;
    if (n==1) {
        head = temp1->next;
        free(temp1);
    }
    else {
        for (int i =0; i<n-2; i++) {
            temp1 = temp1->next;
        }
        Node* temp2 = temp1->next;
        temp1->next = temp2->next;
        free(temp2);
    }
}
int main() {
    int p;
    Insert(2);
    Insert(4);
    Insert(6);
    Insert(8);
    Insert(10);
    Dispaly();
    cout << "enter the position whose element is to be deleted : ";
    cin>>p;
    Delete(p);
    Dispaly();
    
}
