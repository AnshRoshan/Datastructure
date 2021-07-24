// #include <bits/stdc++.h>
#include <iostream>
using namespace std;

int unique(int ar[],int n)
{	
	int unq=0;
	for(int i=0;i<n;i++)
		unq ^=  ar[i];

	return unq;
}

int main()
{
	int num;
	cin >> num;
	int arr[num];
	for(int i=0;i<num;i++)
		cin >> arr[i];
	cout << unique(arr,num) << endl;
   return 0;
}
