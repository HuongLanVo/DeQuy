#include<bits/stdc++.h>
using namespace std;
void nhap(int n){
	do{
		cout << "nhap phan tu: "; cin >> n;
	}while(n <0);
}
int doiXung(int n, int s = 0){
	int m;
	if(n != 0){
		m = n%10;
		s = s*10 + m;
		doiXung(n/10);
	}
	return s;
}
main(){
	int n;
	int m, s;
	nhap(n);
	s = doiXung(n);
	if(n == s) cout << "doi xung";
	else cout << "khong";
}
