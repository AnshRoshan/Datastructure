// #include <bits/stdc++.h>
#include <iostream>

//using namespace std;
#define out(st) std :: cout << st << std ::endl ;
#define in(num) std :: cin >> num;

void seive(int n)
{
	int prime[n]={0};
	for (int i = 2; i*i< n; ++i)
		if(prime[i]==0)
			for (int j = i*i; j <=n ; j+=i)
				prime[j]=1;

	for (int i = 2; i < n; ++i)
		if(!prime[i])
			out(i);
}


int main()
{
    std ::ios_base::sync_with_stdio(false);
    int num;
    in(num);
    seive(num);
    return 0;
}