//#include <bits/stdc++.h>
#include <iostream>
#include <array>

using namespace std;

#define out(st) cout<<st<<endl ;
#define in(num) cin >> num;

bool isSafe(int **arr,int x,int y,int n){
	if(x<n && y<n && arr[x][y]==1)
		return true;
	return false;
}

bool rat(int **arr,int x,int y,int n,int** ans)
{
	if (x==n-1 && y==n-1){
		ans[x][y]=1;
		return true;
	}
	if(isSafe(arr,x,y,n)){
		ans[x][y]=1;
		if(rat(arr,x+1,y,n,ans)){
			return true;
		}
		if(rat(arr,x,y+1,n,ans)){
			return true;
		}
		ans[x][y]=0;
		return false;
	}
	return false;
}


int main()
{
	ios_base::sync_with_stdio(false);
	int x,y;
	in(x);
	in(y);
	int** d2ar= new int*[y];
	for (int i = 0; i < y; i++)
		d2ar[i]=new int[x];

	for (int i = 0; i < y; ++i)
		for (int j = 0; j < x; ++j)
			in(d2ar[i][j]);

	int** solarr= new int*[y];
	for (int i = 0; i < y; i++){
		solarr[i]=new int[x];
		for (int j = 0; j < x; ++j)
			solarr[i][j]=0;
	}
	if(rat(d2ar,0,0,x,solarr))
	{
		for (int i = 0; i < y; ++i){
			for (int j = 0; j < x; ++j)
				if(solarr[i][j])
				cout<<"*"<<" ";
				// cout<<(solarr[i][j])<<" ";
				else
				cout<<("  ");
			out("")
		}
	}
	else
		out("Not possible");
	// delete(d2ar);
	// delete *solarr;
	return 0;
}
