//#include <bits/stdc++.h>
#include <iostream>
#include <array>

//using namespace std;
#define out(st) std :: cout << st << std :: endl ;
#define in(num) std :: cin >> num;

void occur(int arr[],int n,int key)
{	
	static int first=0;
	
	if(arr[n-1]==key)
	{	
		if(first==0)
			out(n)
		first=(n);
	}
	if(n==1)
	{
		out(first);
		return;
	}
	occur(arr,n-1,key);
}

int main()
{
    std :: ios_base::sync_with_stdio(false);
    int num,key;
    std::cin >>num;
    int ar[num];
    for (int i=0;i< *(&ar + 1)-ar;i++ )
        std::cin >> ar[i];
    in(key);
    occur(ar,num,key);
    return 0;
}