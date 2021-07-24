//#include <bits/stdc++.h>
#include <iostream>

//using namespace std;
#define out(st) std :: cout << st << std :: endl ;
#define in(num) std :: cin >> num;

int fibo(int num,int a,int b)
{	
	if(num==1)
		return a;
	out(a);
	a=a+b;
	return fibo(num-1,b,a);
}

int main()
{
    std :: ios_base::sync_with_stdio(false);
    int num;
    in(num);
    out(fibo(num,4,5));
    return 0;
}