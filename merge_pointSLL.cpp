#include <bits/stdc++.h>

using namespace std;

class SinglyLinkedListNode {
    public:
        int data;
        SinglyLinkedListNode *next;

        SinglyLinkedListNode(int node_data) {
            this->data = node_data;
            this->next = nullptr;
        }
};

class SinglyLinkedList {
    public:
        SinglyLinkedListNode *head;
        SinglyLinkedListNode *tail;

        SinglyLinkedList() {
            this->head = nullptr;
            this->tail = nullptr;
        }

        void insert_node(int node_data) {
            SinglyLinkedListNode* node = new SinglyLinkedListNode(node_data);

            if (!this->head) {
                this->head = node;
            } else {
                this->tail->next = node;
            }

            this->tail = node;
        }
};

void print_singly_linked_list(SinglyLinkedListNode* node, string sep, ofstream& fout) {
    while (node) {
        fout << node->data;

        node = node->next;

        if (node) {
            fout << sep;
        }
    }
}

void free_singly_linked_list(SinglyLinkedListNode* node) {
    while (node) {
        SinglyLinkedListNode* temp = node;
        node = node->next;

        free(temp);
    }
}

// Complete the findMergeNode function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    SinglyLinkedListNode* p = head1, *q = head2;
    int l1 = 0, l2 = 0;
    while(p !=  nullptr){
        l1++;
        p = p->next;
    }
    while(q !=  nullptr){
        l2++;
        q = q->next;
    }
    int d = (l1>l2)? l1-l2 : l2-l1;
    SinglyLinkedListNode* temp1, *temp2;
    if (l1>l2){
        temp1 = head1;
        temp2 = head2;
    }
    else{
        temp1 = head2;
        temp2 = head1;
    }
    for (int i=0; i<d; i++){
        temp1 = temp1->next;
    }
    while(temp1 != nullptr && temp2 != nullptr){
        if(temp1 == temp2){
            return temp1->data;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    return 0;

}

int main()
