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
	Node* AddFirstNode(Node *node,int data){
		Node *temp = new Node(data);
		if(node==NULL) return temp;
		Node *curr = temp;
		temp->next=node;
		return curr;
	}
	
	Node* AddLastNode(Node *node, int data) {
		Node *temp = new Node(data);
		if (node == NULL) return temp;
		Node *head = node;
		Node *curr = node;
		while (curr->next != NULL) {
			curr = curr->next;
		}
		curr->next = temp;
		temp->next = NULL;
		return head;
	}

	void display(Node *head) {
		Node *curr = head;
		if (curr == NULL) return;
		cout << curr->data << " ";
		display(curr->next);
	}Bam Lahari

};

int main(int argc, char const *argv[])
{
	solution ss;
	Node *head = NULL;
	head = ss.AddLastNode(head, 30);
	head = ss.AddLastNode(head, 40);
	head = ss.AddLastNode(head, 50);
	head = ss.AddLastNode(head, 60);
	ss.display(head);
	cout<<endl;
	head = ss.AddFirstNode(head,100);
	ss.display(head);



	return 0;
}