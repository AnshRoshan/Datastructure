#include <bits/stdc++.h>
using namespace std;

int getbit(int num,int pos)
{
	// return (num>>(pos-1) & 1);
	return ((num & (pos-1)<< num) !=0);
}
int setbit(int num,int pos)
{
	// return (num>>(pos-1) & 1);
	return ((num & (pos-1)<< num) !=0);
}
int clearbit(int num,int pos)
{
	// return (num>>(pos-1) & 1);
	return ((num & (pos-1)<< num) !=0);
}


int main()
{
	int n;
	cin >> n ;
	cout << getbit(n,3) << endl;
	return 0;
}
