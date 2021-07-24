// #include <bits/stdc++.h>
#include <iostream>

//using namespace std;
#define out(st) std :: cout << st << std :: endl ;
#define in(num) std :: cin >> num;

bool sortcheck(int ar[],int n)
{	
	if(n==1)
		return true;
	return sortcheck(ar+1,n-1) && ar[0]<ar[1];
}

int main()
{
    std :: ios_base::sync_with_stdio(false);
    int num;
    std::cin >>num;
    int ar[num];
    for (int i=0;i< *(&ar + 1)-ar;i++ )
        std::cin >> ar[i];
    if(sortcheck(ar,num))
    	out("Perfectly sorted.")
    else
    	out("Not a Sorted Arrays. ")
    return 0;
}