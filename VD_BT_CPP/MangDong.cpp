#include<bits/stdc++.h>
using namespace std;
void nhapmd(int *&a, int &n){
	do{
		cout << "nhao so phan tu: ";
		cin >> n;
	}while(n<1);
	a = new int [n];//cap n o nho
	for(int i =0; i <n; i++){
		cout << "a[" << i+1 << "]: ";
		cin >> *(a+i);//a[i];
	}
}
void inmd(int *a, int n){
	for(int i = 0; i < n; i++){
		cout << a[i] << "\t";
	}
}
void chenvtk(int *&a, int &n, int &x, int &k){
	cout << "nhap gia tri can chen: ";
	cin >> x;
	do{
		cout << "nhap vi tri can chen: ";
		cin >> k;
	}while(k <1||k>n+1);
	n++;
	a = (int*)realloc(a, n*sizeof(int));
	for(int i = n-1; i>=k; i--)
		a[i]=a[i-1];
	a[k-1] = x;
}
void chentangdan(int *&a, int &n, int &x){
	cout << "nhap gia tri can chen: ";
	cin >> x;
	n++;
	a = (int*)realloc(a, n*sizeof(int));
	int i = 0;
	while(i<n&&x>=a[i])i++;
	for(int j = n-1; j>i;j--)
		a[j] = a[j-1];
	a[i] = x;
}
void xoavtk(int *&a, int &n, int &k){
	do{
		cout << "nhap vi tri can xoa: ";
		cin >> k;
	}while (k < 1||k>n);
	for(int i = k-1; i <n-1; i++) a[i] = a[i+1];
	n--;
	a = (int*)realloc(a, n*sizeof(int));
}
void xoakhoa(int *&a, int &n, int &x){
	cout << "\nnhap khoa x: "; cin >> x;
	int i = 0;
	while(i <n && x!= a[i]) i++;
	if(i == n) cout << "khong co " << x << " trong mang a\n";
	else{
		for(int j = i; j <n-1; j++)
			a[j] = a[j+1];
		n--;
		a = (int*)realloc(a, n*sizeof(int));
	}
}
void xoatrung(int *&a, int &n){
	for(int i = 0; i < n; i++){
		if(a[i]%2 == 0){
			for(int j = i; j<n-1; j++)
			a[j] = a[j+1];
			n--;
			i--;
		}
	}
	a = (int*)realloc(a, n*sizeof(int));
	if(n==0)cout << "\nmang sau khi xoa rong";
	else inmd(a, n);
}
void timtuantu(int *&a, int &n, int &x){
	cout << "\nnhap gia tri cam tim: "; cin >> x;
	int i=0;
	while(i<n &&x!=a[i])i++;
	if(i==n) cout << "khong tim thay " << x << " trong mang";
	else cout << "\ntim thay " << x << " tai vi tri " << i+1;
}
void timnhiphan(int *&a, int &n, int &x){
	cout << "\nnhap gia tri cam tim: "; cin >> x;
	int left = 0, right = n-1, mid;
	while(left<right){
		mid = (left+right)/2;
		if(x>a[mid]) left=mid+1;
		else right=mid;
	}
	if(a[left] == x) cout << "\ntim thay " << x << " tai vi tri " << left+1;
	else cout << "\nkhong tim thay " << x << " trong mang";
}
void bubblesort(int *a, int n){
	for(int i= 0; i <n-1; i++){
		for(int j = n-1; j>i; j--)
		if(a[j]<a[j-1]){
			int temp = a[j];
			a[j] = a[j-1];
			a[j-1]= temp;
		}
	}
}
void selectionsort(int *a, int n){
	for(int i = 0; i < n-1; i++){
		int min=a[i], min_pos= i;
		for(int j=i+1; j<n; j++)
			if(min > a[j]){
				min=a[j];
				min_pos=j;
			}
		int temp =a[i];
			a[i] = a[min_pos];
			a[min_pos] = temp;
	}
}
void quickSort(int *a, int left, int right){
	int pivot=a[(left+right)/2];
	int i = left, j=right;
	while(i<j){
		while(a[i]<pivot)i++;
		while(a[j]>pivot)j--;
		if(i<=j){
			swap(a[i], a[j]);
			i++; j--;
		}
	}
	if(left<j) quickSort(a, left, j);
	if(i<right) quickSort(a, i, right);
}
main(){
	int *a, n, k, x;
	nhapmd(a,n);
	//n = n+1;
	//a[n-1] = 7;
	//a=(int*)realloc(a, n*sizeof(int));//xin them 1 o nho tren mang cu
	inmd(a, n); cout << "\n";
//	chenvtk(a, n, x, k);
//	inmd(a, n);
	//xoakhoa(a, n, x);
	//xoatrung(a, n);
	//inmd(a, n);
	//timtuantu(a, n, x);
	//timnhiphan(a, n, x);
//	bubblesort(a,n);
	//selectionsort(a, n);
	quickSort(a, 0, n-1);
	inmd(a, n);
}
