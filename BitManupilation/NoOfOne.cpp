#include <bits/stdc++.h>
using namespace std;

int count(int n)
{	
	int count=0;
	while(n)
	{	
		// 1 && + ive is 1   but 1 && 0 is 0
		n=n&n-1;
		count++;
	}
	return count;
}

int main()
{	
	int num;
	cin >> num;
	cout << "The Count Of Number Of 1s is:--- "<< count(num) << endl;
    return 0;
}
