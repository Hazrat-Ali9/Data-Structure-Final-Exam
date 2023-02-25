#include<bits/stdc++.h>
using namespace std;

class Node{
	public:
	int value;
	Node* nxt;
	Node* prv;
};

class LinkedList{
	public:
	Node* head;
	Node* tail;
    int sz;
	LinkedList()
	{
		head = NULL;
        tail = NULL;
        sz = 0;
	}
    Node* CreateNewNode (int data){
        Node* newnode = new Node;
        newnode->value = data;
        newnode->nxt = NULL;
        newnode->prv = NULL;
        return newnode;
    }
	void insertHead(int value)
	{
		        Node* newnode = CreateNewNode(value);
        if(sz==0)
        {
            head = newnode;
            tail = newnode;
            sz++;
            return;
        }
        head->prv = newnode;
        newnode->nxt = head;
        head = newnode;
        sz++;
	}
	void insertTail(int value)
	{
        Node* newnode = CreateNewNode(value);
        if(sz==0)
        {
            head = newnode;
            tail = newnode;
            sz++;
            return;
        }
        tail->nxt = newnode;
        newnode->prv = tail;
        tail = newnode;
        sz++;
	}
	void insertMid(int value)
	{
		Node* node = CreateNewNode(value);
		Node* temp = head;
        if(sz==0)
        {
            head = node;
            tail = node;
            sz++;
            return;
        }
		int mid = sz/2;
		for (int i=0;i<mid;i++){
			temp = temp->nxt;
		}

		if (sz % 2 == 0) {
            node->prv = temp->prv;
            node->nxt = temp;
            temp->prv->nxt = node;
            temp->prv = node;
        } else {
            node->nxt = temp->nxt;
            node->prv = temp;
            temp->nxt->prv = node;
            temp->nxt = node;
        }
	}

};
int main()
{
	LinkedList a;
	LinkedList b;

	a.insertHead(1);
	a.insertTail(5);
	a.insertMid(3);
	a.insertHead(0);
	a.insertTail(10);


	b.insertHead(10);
	b.insertTail(50);
	b.insertMid(30);
	b.insertHead(9);
	b.insertTail(100);

}
