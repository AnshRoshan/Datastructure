#include <bits/stdc++.h>
using namespace std;

void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
int main()
{
	int a,b;
	cin >> a >>b;

	// int *ptra=&a;
	// int *ptrb=&b;
	// swap(ptra,ptrb);

	swap(&a,&b);
	cout << a <<" "<< b<<endl;
	return 0;
}
