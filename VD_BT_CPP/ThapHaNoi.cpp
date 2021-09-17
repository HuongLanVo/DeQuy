#include<iostream>
using namespace std;
int n = 8, x[9], a[17], b[17], c[9], dem = 0;
void in()
{
    cout << "cach: " << ++dem << ":";
    for(int i = 1; i <= n; i++)
    {
        cout <<"("<< i << ","<< x[i] << ")\t";
    }
    cout << endl;
}
void Try(int i)
{
    for(int j = 1; j <= n; j++)
        if(a[i-j+8] == 0 && b[i+j] == 0 && c[j] == 0)
        {
            x[i] = j;
            a[i-j+8] = 1;
            b[i+j] =1;
            c[j] = 1;
            if(i == n) in();
            else Try(i+1);
            a[i-j+8] = 0;
            b[i+j] =0;
            c[j] = 0;
        }
}
main()
{
    //nhap();
    Try(1);
}
