#include<iostream>
using namespace std;
//cau a
void in(int a[], int n)
{	if(n>0)
	{  cout<<a[n-1]<<"\t";
	   in(a,n-1);
	}
}
void in2(int a[],int i, int n)
{  if(i<n)
   {   cout<<a[i]<<"\t";
       in2(a,i+1,n);
   }	
}
// cau b
int tongledq(int a[], int n)
{  if(n==0) return 0;
   else
      if(a[n-1]%2==0) return tongledq(a,n-1);
      else return a[n-1]+tongledq(a,n-1);      
}
//cau c
int demchandq(int a[], int n)
{	if(n==0) return 0;
   else
      if(a[n-1]%2==0) return 1+demchandq(a,n-1);
      else return demchandq(a,n-1);
}

int main()
{  
	int a[5]={1,2,3,4,5},n=5;
	cout<<"\n Mang in theo de quy la:\n";
	in2(a,0,n);
	cout<<"\n Tong cac so le trong mang la: "<<tongledq(a,n);
	cout<<"\n So luong so chan trong mang la: "<<demchandq(a,n);
	
}
