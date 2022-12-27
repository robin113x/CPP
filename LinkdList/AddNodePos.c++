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
	Node* insertAt(Node *node,int pos,int val){
		Node *temp = new Node(val);
		Node *head = node;
		if(pos==0 || node==NULL) {
			temp->next=node;
		}
		pos-=2;
		while(pos>0 && node!=NULL){
			node=node->next;
			pos--;
		}
		temp->next=node->next;
		node->next=temp;
		return head;
		
	}


	Node* creatNode(int n) {
		if (n == 0) return NULL;
		Node *temp1 = new Node(1);
		Node *head = temp1;
		for (int i = 2; i <= n; i++) {
			Node *temp2 = new Node(i);
			temp1->next = temp2;
			temp1 = temp2;
		}
		return head;
	}

	void displayNode(Node *node) {
		if (node == NULL) return;
		cout << node->data << " ";
		displayNode(node->next);
	}



};

int main(int argc, char const *argv[])
{
	solution ss;
	int n; cin >> n;
	Node *head = ss.creatNode(n);
	ss.displayNode(head);
	cout<<endl;
	int pos;cin>>pos;
	head = ss.insertAt(head,pos,20);
	ss.displayNode(head);





	return 0;
}