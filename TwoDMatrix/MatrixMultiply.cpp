#include <bits/stdc++.h>
using namespace std;

int main()
{
	int r1,c1,r2,c2;
	cin>>r1>>c1;
	int arr[r1][c1];
	for(int i=0;i<r1;i++)
		for(int j=0;j<c1;j++)
			cin >> arr[i][j];

	cin>>r2>>c2;
	int arr2[r2][c2];
	for(int i=0;i<r2;i++)
		for(int j=0;j<c2;j++)
			cin >> arr2[i][j];

	int mul[r1][c2];
	if(c1!=r2)
	{
		cout<<"The Row of 2nd matrix and Columns of 1st matrix  must be same";
		return 0;
	}
	for (int i = 0; i < r1; i++)
	{
		for (int j = 0; j < c2 ; j++)
		{
			for (int k = 0; k < r2; k++)
				mul[i][j]+=arr[i][k]+arr2[j][k];
		}
	}
	cout<<endl;
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c2;j++)
			cout <<mul[i][j]<<" ";
		cout<<endl;

	}
	return 0;
}
