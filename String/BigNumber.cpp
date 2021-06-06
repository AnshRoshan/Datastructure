#include <bits/stdc++.h>
using namespace std;

int main()
{
	string st="";
	cin>>st;

	sort(st.rbegin(),st.rend());
	cout << st << endl;

	sort(st.begin(),st.end(),less<char>());
	cout << st << endl;
	sort(st.begin(),st.end(),greater<char>());
	cout << st << endl;

	sort(st.begin(),st.end(),equal_to<int>());
	cout << st << endl;

	return 0;
}
