//#include <bits/stdc++.h>
#include <iostream>

//using namespace std;
#define out(st) std :: cout << st << std :: endl ;
#define in(num) std :: cin >> num;

int main()
{
    std :: ios_base::sync_with_stdio(false);
    int a,b;
    in(a)
    in(b)
    if(a<b)
    	std::swap(a,b);
    for (int rem=a%b; rem!=0 ; a=b,b=rem,rem=a%b);
    out(b);
    return 0;
}