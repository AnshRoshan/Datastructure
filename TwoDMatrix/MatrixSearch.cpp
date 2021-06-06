#include <bits/stdc++.h>
using namespace std;

int main()
{
	int row,col,num;
	cin>>row>>col;
	int arr[row][col];
	for(int i=0;i<row;i++)
		for(int j=0;j<col;j++)
			cin >> arr[i][j];

	cin>>num;
	for (int i = 0,j = col-1; i<row&&j>0;)
	{
		if(arr[i][j]==num)
		{	cout<<"Found the number.";
			return 0; 	
		}
		if(arr[i][j]<num)
			i++;
		else 
			j--;
	}
	cout<<"Number is Not found";
	return 0;
}
