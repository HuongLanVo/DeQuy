#include<iostream>
#include<ctype.h>
using namespace std;
struct monan
{   int mamonan;
    string tenmon;
   float dongia;
};
void nhapmonan(monan *&a, int &n)
{	do{cout<<"\n Nhap so luong mon an: ";
	   cin>>n;
	}while(n<1);
	a=new monan[n];
	for(int i=0;i<n;i++)
	{		a[i].mamonan=i+1;
			cout<<"\n Nhap ten mon an: ";	fflush(stdin);	getline(cin,a[i].tenmon);
			do{	cout<<"\n Nhap don gia ";	cin>>a[i].dongia;
			}while(a[i].dongia<0);		
	}
}
void inmenu(monan * a, int n)
{ cout<<"Ma mon an\tTen mon an\tDon gia\n";
   for(int i=0;i<n;i++)
   cout<<a[i].mamonan<<"\t\t"<<a[i].tenmon<<"\t  "<<a[i].dongia<<endl;    
}
void xoatrai(monan * &a, int n)
{   string s;
    for(int j=0;j<n;j++)
    {s=a[j].tenmon;
	 int i=0;
    while(s[i]==' ') i++;
    s.erase(0,i);    
    a[j].tenmon=s;
    }    
}
void xoaphai(monan * &a, int n)
{  string s;
    for(int j=0;j<n;j++)
    {s=a[j].tenmon;
	 int i=s.size()-1, dem=0;	 
    while(s[i]==' ' && i>=0) 
			{i--;dem++;}
    s.erase(i+1,dem);    
    a[j].tenmon=s;
    }     
}
void xoagiua(monan*&a, int n)
{  string s;
	for(int i=0;i<n;i++)
   {  s=a[i].tenmon;
      for(int j=0;j<s.size();j++)
         if(s[j]==' '&&s[j+1]==' ')
            {s.erase(j,1); j--;}    
	  a[i].tenmon=s;        
   }
}
//cau f
void chuyenTieuDe(monan * &a, int n)
{  //MY QuANG Ba MUa    
   string s;
	for(int i=0;i<n;i++)
	{    s=a[i].tenmon;
		for(int j=0;j<s.size();j++)
		   if(isupper(s[j])!=0) s[j]+=32; 
		   //my quang ba mua
		if(islower(s[0])!=0) s[0]-=32;
		for(int j=0;j<s.size();j++)
		    if(s[j]==' '&&s[j+1]!=' '&&s[j+1]!='\0'&&islower(s[j+1])!=0)
		    	s[j+1]-=32;  				  	
		a[i].tenmon=s; 
	}
}
void inten(monan * a, int n)
{   for(int j=0;j<n;j++)
   	cout<<a[j].tenmon<<"\n";
}
int main()
{  monan *a; int n;
   nhapmonan(a,n);
   cout<<"\n Danh sach ten mon truoc khi chuan hoa:\n";
   inten(a,n);
   xoatrai(a,n);
   xoaphai(a,n);
   xoagiua(a,n);
   chuyenTieuDe(a,n);
   cout<<"\n Danh sach ten mon sau khi chuan hoa:\n";
   inten(a,n);
   
}
