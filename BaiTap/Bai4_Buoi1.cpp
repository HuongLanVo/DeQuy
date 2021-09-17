#include<bits/stdc++.h>
using namespace std;
void nhap(int &a, int &b)
{
   cout << "nhap a: "; cin >> a;
   cout << "nhap b: "; cin >> b;
}
int hamQ(int a, int b){
	if(a < b) return 0;
	else return hamQ(a-b, b) + 1;
}
main(){
	int a, b;
	nhap(a, b);
	cout << hamQ(a, b);
}

