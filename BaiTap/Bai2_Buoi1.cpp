#include<bits/stdc++.h>
using namespace std;
void nhap(int &n)
{
    do
    {
        cout << "nhap n: "; cin >> n;
    }while(n<0);
}
int GiaiThua(int n)
{
    if(n == 0) return 1;
    if(n == 1) return n;
    else
        return n*GiaiThua(n-1);
}
main()
{
    int n;
    nhap(n);
    cout << GiaiThua(n);

}
