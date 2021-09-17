#include<bits/stdc++.h>
using namespace std;
void nhap(int a[][10], int n, int m){
	cout << "nhap so hang: "; cin >>n;
	cout << "nhap so cot: "; cin >>m;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cout << "a[" << i << "][" << j << "]: ";
			cin >> a[i][j];
		}
	}
}
int maxx(int a[][10], int n, int m){
	int Max = a[0][0];
	for(int i = 0; i < n; i++)
		for(int j = 0; j < m; j++)
			if(Max < a[i][j]) Max = a[i][j];
	return Max;
}
int maxx(int a[][10], int n, int m, int x){
	for(int i = 0; i < n; i++)
		for(int j = 0; j < m; j++)
			if(x == a[i][j]) return 1;
			return 0;
}
void xuat(int a[][10], int n, int m){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++)
			cout << a[i][j] << "\t";
			cout << "\n";
}
}
main(){
	int a[10][10], n, m;
	nhap(a, n, m);
	xuat(a, n, m);
}
