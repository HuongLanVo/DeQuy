//tinh tong tu 1 toi n
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
long tong(int n)
{
    if(n == 1) return 1;
    else return n + tong(n - 1);
}
main()
{
    int n;
    nhap(n);
    cout << tong(n);
}
