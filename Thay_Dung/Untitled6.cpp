#include<iostream>
#include<conio.h>
using namespace std;
struct Node{
	int Data;
	Node *Next;
};
//typedef int Mang[10];
//Mang a;
typedef Node *DS;
Node *Create_node(int a){
	Node *p;
	p = new Node;
	p -> Data = a;
	p -> Netx = NULL;
	return p;
}
void addNode(DS &pHead, int a){
	Node *p;
	p = Create_node(a);
	p-> Next = pHead;
	pHead=p;	
}
void addTail(DS &pHead, int a){
	Node *p;
	p = Create_node(a);
	if(pHead == NULL) pHead=p;
	else{
		for(q=pHead; q-> Next != NULL; q=q->Next);
		q -> Next=p;
	}
}
void Crear_List(DS pHead){
	int a;
	do{
		cout << "nhap a: "; cin >> a;
		if(a!=0)add 
	}
}
