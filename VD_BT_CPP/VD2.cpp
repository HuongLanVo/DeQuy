//tinh tong cac so le tu 1 toi n
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
long tongLe(int n)
{
    if(n == 1) return 1;
    else
    if(n % 2 != 0) return n + tongLe(n-2);
    else return tongLe(n-1);
}
main()
{
    int n;
    nhap(n);
    cout << tongLe(n);
}

