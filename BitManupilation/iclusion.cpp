//#include <bits/stdc++.h>
#include <iostream>

//using namespace std;
#define out(st) std :: cout << st << std :: endl ;
#define in(num) std :: cin >> num;

int lcm(int a,int b)
{	
	int i=(a>b)?a:b;
	for(;i>0;i--)
		if(a%i==0 && b%i==0)
			break;
	return a*b/i;
}

int count(int n,int a,int b)
{
	int ca=n/a;
	int cb=n/b;
	int cboth=n/lcm(a,b);
	return ca+cb-cboth;
}


int main()
{
    std :: ios_base::sync_with_stdio(false);
    int num,div1,div2;
    in(num)
    in(div1)
    in(div2)
    out(count(num,div1,div2))
    return 0;
}