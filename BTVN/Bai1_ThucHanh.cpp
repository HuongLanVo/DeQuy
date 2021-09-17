#include<iostream>
using namespace std;

int demlevonglap(int a[], int n){
	int dem = 0;
	for(int i = 0; i < n; i++){
		if(a[i] % 2 != 0) dem ++;
	}
	return dem;
}

int demledq(int a[], int n)
{	
	if(n==0) return 0;
    else
      if(a[n-1]%2!=0) return 1+demledq(a,n-1);
      else return demledq(a,n-1);
}
main(){
	int n=5, a[5] = {1,2,3,4,5};
	cout << "dem so le trong mang a bang vong lap la:  " << demlevonglap(a, n);
	cout << "\ndem so le trong mang a bang de quy la:  " << demledq(a, n);
}
