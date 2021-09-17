//in so tu 1 toi n
#include<iostream>
using namespace std;
void nhap(int &n)
{
    do
    {
        cout << "nhap so nguyen n: ";
        cin >> n;
    }while(n < 1);
}
void in(int n)
{
    if(n > 0)
    {
        in(n-1);
        cout << n << "\t";
    }
}
main()
{
    int n;
    nhap(n);
    in(n);s
}


