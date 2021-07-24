//#include <bits/stdc++.h>
#include <iostream>
#include <array>

//using namespace std;
#define out(st) std :: cout << st << std :: endl ;
#define in(num) std :: cin >> num;

void pattern(int n)
{
	out(n);
	if(n==1)
		return;
	pattern(n-1);
	out(n);
}
int main()
{
    std :: ios_base::sync_with_stdio(false);
    int num;
    in(num);
    pattern(num);
    return 0;
}