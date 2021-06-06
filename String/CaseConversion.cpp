#include <bits/stdc++.h>
using namespace std;

int main()
{
	string st="";
	getline(cin,st);

	// converting the character into the  upper case.
	transform(st.begin(),st.end(),st.begin(),::toupper);
	cout << st << endl;

	transform(st.begin(),st.end(),st.begin(),::tolower);
	cout << st << endl;
	return 0;
}

