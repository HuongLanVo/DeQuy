#include<iostream>
#include<stdlib.h>
using namespace std;
struct Node{
	int Data;
	No
	Node *Netx;
};
typedef Node * TRO;
void CREATE(TRO &F)
{    F=NULL;
}
void PRINT(TRO F)
{    cout<<"[";
    while(F!=NULL)
    {   cout<<F->Data<<"\t";
        F=F->Next;
    }
    cout<<"]";
}
void ADD_FIRST(TRO & F, int x)
{    Node * e=new Node;
    e->Data=x;
    e->Next=NULL;
    if(F==NULL) F=e;
    else
      { e->Next=F;
        F=e;
      }
    e=NULL;delete(e);
}
void RUN()
{
    TRO F;
    CREATE(F);
    cout<<"\n DANH SACH VUA KHOI TAO LA:\n";
    PRINT(F);
    int x; char ch;
    do{
        cout<<"\n Nhap x: ";
        cin>>x;
        ADD_FIRST(F,x);
        cout<<"\n NHAN ESC DE DUNG NHAP";
        ch=getch();
    }while(ch!=27);
    cout<<"\n DANH SACH VUA NHAP THEO THU TU THEM DAU LA:\n";
    PRINT(F);

}
main()
{
   RUN();
}
