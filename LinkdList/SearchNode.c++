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
	bool searchNode(Node *head,int val){
	if(head==NULL) return false;
	Node *curr =head;
	while(curr!=NULL){
		if(curr->data==val)
			return true;
		curr=curr->next;
	}
	return false;
	
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
	int n;cin>>n;
	Node *head = ss.create(n);
	ss.Display(head);
	int val;cin>>val;cout<<endl;
	cout<<ss.searchNode(head,val);



	return 0;
}