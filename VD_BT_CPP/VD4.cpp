//tinh tong cac chu so trong n
#include<iostream>
using namespace std;
void nhap(unsigned long &n)
{
    do
    {
        cout << "nhap so nguyen n: ";
        cin >> n;
    }while(n < 1);
}
long tongN(unsigned long n)
{
    if(n < 10) return n;
    else return n%10 + tongN(n/10);
}
main()
{
    unsigned long n;
    nhap(n);
    cout << tongN(n);
}


