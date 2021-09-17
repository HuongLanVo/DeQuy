#include<bits/stdc++.h>
using namespace std;
void nhap(int &n)
{
    do
    {
        cout << "nhap n: "; cin >> n;
    } while(n < 0);
}
int fibonacci(int n) {
    if (n < 0) {
        return -1;
    } else if (n == 0 || n == 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
int main() {
	int n;
	nhap(n);
    for (int i = 0; i < n; i++) {
    	cout << fibonacci(i) << "\t";
    }
}
