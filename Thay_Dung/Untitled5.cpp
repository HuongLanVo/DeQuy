#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
void Input_MaTrix(int A[][10],int &n,int &m)
{
	cout<<"Nhap so hang: ";cin>>n;
	cout<<"Nhap so cot: ";cin>>m;
	for(int i=0;i<n;i++)
	  for(int j=0;j<m;j++)
	    {
	    	cout<<"A["<<i<<"]["<<j<<"]=";
	    	cin>>A[i][j];
		}
}
void Output_MaxTrix(int A[][10],int n,int m)
{
	for(int i=0;i<n;i++)
	{
	  for(int j=0;j<m;j++)
	    cout<<A[i][j]<<"\t";
	    cout<<"\n";
	}  
}
int Find_Max(int A[][10],int n,int m)
{
	int i,j,Max=A[0][0];
	for(int i=0;i<n;i++)
	  for(int j=0;j<m;j++)
	    if(Max<A[i][j]) Max=A[i][j];
	return Max;
}
int Find_X(int A[][10],int n,int m,int X)
{
	for(int i=0;i<n;i++)
	  for(int j=0;j<m;j++)
	   if(X==A[i][j]) return 1;
	   return 0;
}
int Sum(int A[][10],int n,int m){
	int Sum = 0;
	for(int i=0;i<n;i++)
	  for(int j=0;j<m;j++)
	    Sum += A[i][j];
	return Sum;
}
//int main()
//{
//	int A[10][10],n,m;
//	Input_MaTrix(A,n,m);
//	Output_MaxTrix(A,n,m);
//	//cout<<"Gia tri lon nhat la: "<<Find_Max(A,n,m);
//	if(Find_X(A,n,m,10)==1) cout<<"Co ton tai X trong MT";
//	else cout<<"Khong ton tai X trong MT";
//}
////getch();tv conio.h
////system("cls");xoa case tv stdio.h
int main()
{
	int A[10][10],n,m,chon,X;
	do{
		cout<<"======= MENU =======\n";
		cout<<"1. Nhap ma tra \n";
		cout<<"2. In ma tra \n";
		cout<<"3. Tim Max \n";
		cout<<"4. Tim X \n";
		cout<<"5. Tinh tong tren ma tran";
		cout<<"Ban chon cong viec thuc hien: ";
		cin>>chon;
		switch(chon)
		{
			case 1 : Input_MaTrix(A,n,m); break;
			case 2 : Output_MaxTrix(A,n,m);break;
			case 3 : cout<<"Gia tri lon nhat la: "<<Find_Max(A,n,m); break;
			case 4 : cout<<"Nhap gia tri can tim X=";cin>>X;
			      if(Find_X(A,n,m,X)==1) cout<<"Co ton tai X trong MT";
					else cout<<"Khong ton tai X trong MT"; break;
			case 5 : cout<<"Tong tat ca cac phan tu tren ma tran la: "<<Sum_Matrix(A,n,m);break;
		}
		getch();//tv conio.h
		system("cls");//tv stdio.h
	}while(chon!=0);

}

	
