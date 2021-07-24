#include <bits/stdc++.h>
using namespace std;

void subset(int arr[],int n)
{	
	// (1<< n) is used instead of  2^n,
	//  example (1<< 3)= 8  and 2^3=8 same.
	for (int i = 0; i < (1<< n); ++i)
	{	
		cout << "{";
		for (int j = 0; j < n; ++j)
			if(i & (i<<j))
				printf(" %d ",arr[j]);
		cout <<"}\n";
	}
}
int main()
{
	int num;
	cin >> num;
	int ar[num];
	for (int i = 0; i < num; ++i)
		cin >> ar[i];
	subset(ar,num);
	return 0;
}
