#include <iostream>
#include<bits/stdc++.h>
using namespace std;

class Node {
public:
	int data;
	Node *next;
	Node(int data) {
		this->data = data;
		this->next = NULL;
	}
};

class solution {
public:

	Node* DeleteFirst(Node *head) {
		if (head == NULL || head->next == NULL) return NULL;
		return head->next;
	}

	Node* DeleteLast(Node *head) {
		if (head == NULL || head->next == NULL) return NULL;
		Node *curr = head;
		while (curr->next->next != NULL) {
			curr = curr->next;
		}
		curr->next = NULL;
		return head;


	}
	Node* DeleteAt(Node *head, int pos) {
		if (head == NULL || head->next == NULL || pos<=0) return head;
		Node *curr = head;
		if (pos == 1) {return curr->next;}
		pos -= 2;
		while (pos >= 0  && curr->next->next != NULL) {
			curr = curr->next;
			pos--;
		}
		curr->next = curr->next->next;
		return head;

	}

	Node* create(int n) {
		if (n == 0) return NULL;
		Node *temp = new Node(1);
		Node *head = temp;
		for (int i = 2; i <= n; i++) {
			Node *temp2 = new Node(i);
			temp->next = temp2;
			temp = temp2;
			temp2 = NULL;
		}
		return head;

	}

	void Display(Node *node) {
		if (node == NULL) return;
		cout << node->data << " ";
		Display(node->next);
	}



};

int main(int argc, char const *argv[])
{
	solution ss;
	int n; cin >> n;
	Node* head = NULL;
	head = ss.create(n);
	ss.Display(head); cout << endl;
	head = ss.DeleteFirst(head);
	ss.Display(head); cout << endl;
	ss.DeleteLast(head);
	ss.Display(head); cout << endl;
	head=ss.DeleteAt(head, 0);
	ss.Display(head); cout << endl;



	return 0;
}