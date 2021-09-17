#include<bits/stdc++.h>
using namespace std;
struct giangvien
{   int maGiangVien;
    string ten;
   int tuoi;
};
void nhapmd(giangvien *&a, int &n){
	do{
		cout << "nhao so phan tu: ";
		cin >> n;
	}while(n<1);
	a = new giangvien[n];
	for(int i=0;i<n;i++)
{		cout<<"\n Nhap ma giang vien: ";	
		cin >> a[i].maGiangVien;
		cout<<"\n Nhap ten giang vien: ";	
		fflush(stdin);	
		getline(cin,a[i].ten);
		do{	
			cout<<"\n Nhap tuoi ";	cin>>a[i].tuoi;
		} while(a[i].tuoi<0 || a[i].tuoi>100);		
	}
}
void xuat(giangvien * a, int n)
{ 
	cout<<"Ma giang vien\tTen giang vien\ttuoi\n";
    for(int i=0;i<n;i++)
   		cout<<a[i].maGiangVien<<"\t\t"<<a[i].ten<<"\t\t  "<<a[i].tuoi<<endl;    
}
void sx(giangvien *a, int n){
	giangvien temp;
	for(int i = 0; i < n-1; i++){
		for(int j = i; j < n; j++ )
			if(a[i].maGiangVien>a[j].maGiangVien){
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
		}
	}
	xuat(a, n);
}
void chenX(giangvien *a, int &n, giangvien x)
{
	sx(a, n);
	cout << "nhap thong tin giang vien can them: \n";
	cout<<"\n Nhap ma giang vien: ";	
	cin >> x.maGiangVien;
	cout<<"\n Nhap ten giang vien: ";	
	fflush(stdin);	
	getline(cin,x.ten);
	do{	
		cout<<"\n Nhap tuoi ";	cin>>x.tuoi;
	} while(x.tuoi<0 || x.tuoi>100);
	int i = 0;
	while(i < n && x.maGiangVien>a[i].maGiangVien) i++;
	n++;
	a = (giangvien *) realloc(a, n* sizeof(int));
	for(int j = n-1; j>i; j--)
		a[j] = a[j-1];
	a[i] = x;
	xuat(a, n);
}
main(){
	giangvien *a, x;
	int n;
	nhapmd(a, n);
	xuat(a, n);
	sx(a, n);
	chenX(a, n, x);
}
