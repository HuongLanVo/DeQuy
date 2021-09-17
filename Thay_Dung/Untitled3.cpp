#include<bits/stdc++.h>
using namespace std;
void nhap(int a[], int n){
	for(int i = 0; i < n; i++){
		cout << "a[" << i << "]: ";
		cin >> a[i];
	}
}
void xuat(int a[], int n){
	for(int i = 0; i < n; i++){
		cout << a[i] << "\t";
	}
}
int Tim_Min(int a[],int n)
{  int i;
	int Min=a[0],vt=0;
	for(i=0;i<n;i++)
	 if(Min>a[i])
	 {
	 Min=a[i];vt=i;
	}
	return vt;
}
void sx(int a[], int n, int i = 0){
	while(i < n){
		int vt = Tim_Min(a, n);
		int k = a[1];
		a[i] = a[vt];
		a[vt] = k;
		sx(a, n, i+1);
	}
}
main(){
	int n; cout << "nhap so phan tu mang: "; cin >> n;
	int a[20];
	nhap(a, n);
	xuat(a, n);
	sx(a, n);
	xuat(a, n);
}
