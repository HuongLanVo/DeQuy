#include<bits/stdc++.h>
using namespace std;
void nhap(int n){
	do{
		cout << "nhap phan tu: "; cin >> n;
	}while(n <0);
}
int A(int n, int m){
	if(m == 0) return n+1;
	if(n == 0) return A(m-1, 1);
	else return A(m-1, A(m, n-1));
}
main(){
	int n, m;
	nhap(n);
	nhap(m);
	cout << A(n, m);
}

