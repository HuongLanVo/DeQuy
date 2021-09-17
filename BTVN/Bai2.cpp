#include<iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
struct Node{
	int data;
	struct Node *pNext;
};
typedef struct Node NODE;

struct List{
	NODE *pHead;
	NODE *pTail;
};
typedef struct List LIST;

NODE *createNode(int x)
{
	NODE *p = (NODE*)new(1*sizeof(NODE));
	p->data = x;
	p->pNext = NULL;
	return p;
}

void add_HeadNode(LIST *l, int a)
{
	NODE *p = createNode(a);
	if(l->pHead == NULL)
	{
		l->pHead = l->pTail = p;
	}
	else
	{
		p->pNext = l->pHead;
		l->pHead = p;
	}
}

void add_TailNode(LIST *l,int a)
{
	NODE *p = createNode(a);
	if(l->pHead == NULL)
	{
		l->pHead = l->pTail = p;
	}
	else
	{
		l->pTail->pNext = p;
		l->pTail = p;
	}
}

void insert_Node(LIST *l, int m, int n)
{
	NODE *p = createNode(m);
	
	if(p->data == l->pHead->data && l->pHead->pNext == NULL)
	{
		add_TailNode(l,n);
	}
	else
	{
		NODE *k = l->pHead;
		for(k; k != NULL; k = k->pNext)
		{
			if(p->data == k->data)
			{
				NODE *q = createNode(n);
				q->pNext = k->pNext;
				k->pNext = q;
			}
		}
	}
}

void remove_HeadNode(LIST *l)
{
	NODE *p = l->pHead;
	l->pHead = l->pHead->pNext;
	free(p);
}

void remove_TailNode(LIST *l)
{
	NODE *p,*q;
	if(l->pHead == NULL)
	{
		return;
	}
	if(l->pHead->pNext == NULL)
	{
		l->pHead = NULL;
	}
	else
	{
		for(q = l->pHead; q->pNext != NULL; q = q->pNext)
		{
			p = q;
		}
		p->pNext = NULL;
		free(q);
	}
}

void countElement(LIST l)
{
	int even = 0,odd = 0,negative = 0, positive = 0;
	NODE *p = l.pHead;
	for(p; p != NULL; p = p->pNext)
	{
		if(p->data %2 == 0)
		{
			even++;
		}
		if(p->data % 2 != 0)
		{
			odd++;
		}
		if(p->data < 0)
		{
			negative++;
		}
		if(p->data >= 0)
		{
			positive++;
		}
	}
	cout << "The number of even number: " << even;
	cout << "\nThe number of odd number: " << odd;
	cout << "\nThe number of negative number: " << negative;
	cout << "\nThe number of positive number: " << positive;
	
}

void printList(LIST l)
{
	NODE *p;
	for(p = l.pHead; p != NULL; p = p->pNext)
	{
		cout << p->data;
	}
	cout << "\n";
}

int main(int argc, char *argv[]) {
	int n,x,i = 0;
	LIST l;
	cout << "Enter N = ";
	cin >> n;
	for(i; i < n; i++)
	{
		cout << "a[" << i << "]: ";
		cin >> x;
		add_HeadNode(&l,x);
	}
	cout << "The elements of Linked List is: ";
	printList(l);
	countElement(l);
	cout << "\n";
	cout << "Insert a new Element : \n";
	int m,e;
	cout << "Enter Position : ";
	cin >> m;
	cout << "Enter Number : ";
	cin >> e;
	insert_Node(&l,m,e);
	printList(l);

}
