// Linked List : Inserting a node at beginning
# include <iostream>
# include <conio.h>
# include <stdio.h>
using namespace std;

struct Node {
	int data;
	Node* next;
};


Node* head = NULL;
void insertBeg (int x) {
	Node* temp = new Node();
	temp->data = x;
	temp->next = head;
	head = temp;
}


void Print() {
	Node* temp = head;
	cout << "List is : ";
	while (temp != NULL) {
		cout << temp->data<<" ";
		temp = temp->next;
	}
	cout << "\n";
}

int main() {
	int n,x;
	cout << "Enter the number of elements in the list\n";
	cin >> n;
	for (int i=0; i<n; i++) {
		cout << "Enter the number \n";
		cin>> x;
		insertBeg(x);
		Print();
	}
	return 0;
}

	
	

