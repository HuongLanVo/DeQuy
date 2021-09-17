#include<bits/stdc++.h>
using namespace std;
void nhap(int &a, int &b)
{
    cout << "Nhap a: "; cin >> a;
    cout << "Nhap b: "; cin >> b;
}
int UCLN(int a, int b)
{
    if(a == 0 && b != 0) return b;
    else
        if(a!= 0 && b == 0) return a;
        else
            if(a>b) return UCLN(a-b, b);
            else return UCLN(a, b-a);
}//ước chung lớn nhất của a, b
main()
{
    int a, b;
    nhap(a, b);
    cout << UCLN(a, b);
}
