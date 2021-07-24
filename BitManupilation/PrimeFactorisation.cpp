// #include <bits/stdc++.h>
#include <iostream>

//using namespace std;
#define out(st) std :: cout << st << std :: endl ;
#define in(num) std :: cin >> num;

void primeFactor(int n,int check)
{
	int spf[n+1];
	for (int i = 2; i <=n; ++i)
		spf[i]=i;

	for (int i = 2; i*i<=n; ++i)
		if(spf[i]==i)
			for (int j = i*i; j <=n ; j+=i)
				if(spf[j]==j)
					spf[j]=i ;

	while(check!=1)
	{
		out(spf[check]);
		check/=spf[check];
	}

}

int main()
{
    std :: ios_base::sync_with_stdio(false);
    int num;
    in(num);
    // in(test);
    primeFactor(num,num);
    return 0;
}