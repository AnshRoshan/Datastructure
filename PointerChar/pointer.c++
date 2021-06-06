#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a=10;
	int *aptr=&a;
	cout << aptr<<endl;
	aptr++;
	cout << aptr<<endl;

	char ch='8';
	char *cptr=&ch;
	cout << cptr<<endl;
	cptr++;
	cout << cptr<<endl;

	int n=0;
	cin >> n;
	int ar[n];
	for (int i = 0; i < n; i++)
		cin >> ar[i];
	int *arpt=ar;
	for (int i = 0; i < n; i++)
	{
		cout<<*(arpt+i)<<endl;
		// ar++; it is illegal
	}

	return 0;
}

