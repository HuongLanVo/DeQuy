#include<iostream>
using namespace std;
main(){
	typedef int *intptr; 
	intptr p,q,r; 
	p=new int; 
	q= new int; 
	*p=10; *q=15; 
	r=p; 
	p=q; 
	q=r;
	cout <<*q <<" " <<*p;
}
