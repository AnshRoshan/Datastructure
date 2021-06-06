#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n=0;
	cin>>n;
	char word[n];
	cin >> word;
	for (int i = 0; i < n; i++)
	{
		if(word[i]!=word[n-1-i])
		{
			cout<<"Not a Pallindrome.";
			return 0;
		}
	}
	cout<<"Pallindrome";
	return 0;
}
