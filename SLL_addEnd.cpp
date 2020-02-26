#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
};
Node *head=nullptr;

void addLast(int x)
{
    if(head==nullptr)
    {
        head=new Node;
        head->data=x;
        head->next=nullptr;
    }
    else{
        Node *temp=new Node,*p=head;
        temp->next=nullptr;
        temp->data=x;
        while(p->next!=0){
            p=p->next;
        }
        p->next=temp;
    }
}
void display(Node *p=head)
{
    if(p)
    {
        display(p->next);
        cout<<p->data<<" ";
    }
}

int main()
{
    addLast(1);
    addLast(2);
    addLast(3);
    display();
}
