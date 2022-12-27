#include <iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
	public:
		int data;
		Node *next;
		Node(int data){
			this->data=data;
			next = NULL;
		}
};

class solution {
public:
	void displayNode(Node *head){
		Node *curr = head;
		while(curr!=NULL){
			cout<<curr->data<<" ";
			curr = curr->next;
		}
	}

	void displayNodeRec(Node *head){
		if(head==NULL) return;
		cout<<head->data<<" ";
		displayNodeRec(head->next);
	}

};

int main(int argc, char const *argv[])
{
	Node n1(10);
	Node n2(20);
	Node n3(30);
	n1.next = &n2;
	n2.next = &n3;
	
	Node *head = &n1;
	
	solution ss;
	ss.displayNode(&n1);
	cout<<endl;
	ss.displayNodeRec(&n1);


	Node *n4 = new Node(40);
	n3.next = n4;
	Node *n5 = new Node(50);
	Node *n6 = new Node(60);
	Node *n7 = new Node(70);
	n4->next=n5;
	n5->next=n6;
	n6->next=n7;
	cout<<endl;

	ss.displayNodeRec(&n1);

	cout<<endl;
	ss.displayNode(&n1);




	return 0;
}