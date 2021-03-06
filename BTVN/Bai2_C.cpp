#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

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
	NODE *p = (NODE*)malloc(1*sizeof(NODE));
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

//void insert_Node(LIST *l, int m, int n)
//{
//	NODE *p = findNode(l,m);
//	
//	if(p == NULL)
//	{
//		add_TailNode(l,n);
//	}
//	else
//	{
//		NODE *t = createNode(n);
//		t->pNext = p->pNext;
//		p->pNext = t;
//	}
//	
//}

//NODE *findNode(LIST *l,int a)
//{
//	NODE *p;
//	for(p = l->pHead; p!= NULL; p = p->pNext) 
//	{
//		if(p->data == a)
//		{
//			return p;
//		}
//	}
//	return NULL;
//}

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
	
	printf("The number of even number: %d\n",even);
	printf("The number of odd number: %d\n",odd);
	printf("The number of negative number: %d\n",negative);
	printf("The number of positive number: %d\n",positive);
	
}

void printList(LIST l)
{
	NODE *p;
	for(p = l.pHead; p != NULL; p = p->pNext)
	{
		printf("%d ",p->data);
	}
	printf("\n");
}


int main(int argc, char *argv[]) {
	int n,x,i = 0;
	LIST l;
	printf("Enter N = ");
	scanf("%d",&n);
	for(i; i < n; i++)
	{
		printf("Enter a[%d] = ",i);
		scanf("%d",&x);
		add_HeadNode(&l,x);
	}
	printf("The elements of Linked List is: ");
	printList(l);
	countElement(l);

	return 0;
}
