// #include <bits/stdc++.h>
#include <iostream>
using namespace std;

int setbit(int n, int pos)
{
	return (n & (1<< pos));
}

void unique(int ar[],int n)
{	
	ios_base::sync_with_stdio(false);

	int unq=0;
	for(int i=0;i<n;i++)
		unq ^=  ar[i];

	int find=0,pos=0,copy=unq;
	while(find!=1)
	{
		find= copy & 1;
		pos++;
		copy= copy >>1;
	}
	
	// for finding the first temp;
	int temp=0;
	for(int i=0;i<n;i++)
	{  
		if(setbit(ar[i],pos-1))
			temp=temp^ar[i];
	}

	cout << temp << endl;
	// for finding the Second diferent number;
	cout << (unq^temp) << endl;
	return;
}
int main()
{
	int num;
	cin >> num;
	int arr[num];
	for(int i=0;i<num;i++)
		cin >> arr[i];
	unique(arr,num);
   return 0;
}
