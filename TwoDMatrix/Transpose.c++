#include <bits/stdc++.h>
using namespace std;

int main()
{
	int num=0;
	cin>>num;

	int arr[num][num];
	for(int i=0;i<num;i++)
		for(int j=0;j<num;j++)
			cin >> arr[i][j];
	for (int i = 0; i < num; i++)
	{
		for (int j = i+1; j < num; j++)
		{
			int temp=arr[i][j];
			arr[i][j]=arr[j][i];
			arr[j][i]=temp;
		}
	}
	cout<<endl;
	for(int i=0;i<num;i++)
	{
		for(int j=0;j<num;j++)
			cout << arr[i][j]<<" ";
		cout<<endl;

	}
	return 0;
}
