#include<iostream>
using namespace std;
void nhapmd(int *&a, int &n){
	do{
		cout << "nhap so phan tu: ";
		cin >> n;
	}while(n<1);
	a = new int [n];
	for(int i = 0; i <n; i++){
		cout << "a[" << i+1 << "]: ";
		cin >> *(a+i); //a[i]
	}
}
void inmd(int *a, int n){
	for(int i = 0; i < n; i++)
		cout << a[i] << "\t";
}
main(){
	int *a, n;
	nhapmd(a, n);
	inmd(a, n);
}
