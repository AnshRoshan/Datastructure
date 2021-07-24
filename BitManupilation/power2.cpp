#include <bits/stdc++.h>
using namespace std;

int powercheck(int n)
{	
	// 1 && + ive is 1   but 1 && 0 is 0
	return (1 && (n & n-1));

}

int main()
{	

	int num;
	cin >> num;
	if(powercheck(num))
		cout << "It is not a Power Of 2"<< endl;
	else
		cout << "It is Power Of 2"<< endl;
   return 0;
}
