//chuyen he so 10 sang he so 2
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
long chuyenHe2(int n)
{
    if(n > 0)
    {
        chuyenHe2(n/2);
        cout << n%2;
    }
}
main()
{
    int n;
    nhap(n);
    chuyenHe2(n);
}


