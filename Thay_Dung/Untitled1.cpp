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
void chenK(int a[], int &n, int k, int X){
	for(int i = n; i > k; i --)
		a[i] = a[i-1];
		a[k] = X;
		n++;
}
void Sap_Xep_Tang(int a[], int &n){
	int k;
	for(int i = 0; i < n; i++){
		for(int j = i+1; j < n; j++){
			if(a[i] > a[j]){
				k = a[i];
				a[i] = a[j];
				a[j] = k;
			}
		}
	}
}
void xoa(int a[], int &n, int nz){
	for(int i = nz; i < n-1; i++)
		a[i] = a[i+1];
		n--;
}
int Tim_ViTri_PhanTu_X(int a[], int n, int Xz){
	int VT;
	for(int i = 0; i < n; i++)
		if(Xz == a[i]) return i;
		//return VT;
}
void Xoa_PhanTu_X(int a[], int &n, int Xz){
	int g = Tim_ViTri_PhanTu_X(a, n, Xz);
	if(g >= 0 && g < n) xoa(a, n, g);
	else cout << "X khong co trong mang A";
}
void Xoa_PhanTu_Trung(int a[], int &n){
	int ind;
	for(int i = 0; i < n - 1; i++){
		for(int j = i+1; j < n; j++){
			if(a[i] == a[j]){
				ind = i;
				Xoa_PhanTu_ViTri_K(a, n, ind);
				//i--;
			}
		}
	}
}
main(){
	int n; cout << "nhap so phan tu mang: "; cin >> n;
	int a[20];
	nhap(a, n);
	xuat(a, n);
	int k, X; cout << "\nnhap phan tu can chen: "; cin >> X;
	cout << "nhap vi tri can chen: "; cin >> k;
	chenK(a, n, k, X);
	Sap_Xep_Tang(a, n);
	xuat(a, n);
	int nz; cout << "\nnhap vi tri can xoa: "; cin >> nz;
	xoa(a, n, nz);
	xuat(a, n);
	int Xz; cout << "\nnhap phan tu can xoa: "; cin >> Xz;
	Xoa_PhanTu_X(a, n, Xz);
	xuat(a, n);
}
