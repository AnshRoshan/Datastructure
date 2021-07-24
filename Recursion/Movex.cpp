//#include <bits/stdc++.h>
#include <iostream>
#include <array>

using namespace std;

#define out(st) cout << st << endl ;
#define in(num) cin >> num;

string movex(string st)
{	
	if(st.size()==0)
		return "";
	string ans=movex(st.substr(1));
	if(st[0]=='x')
		return ans+st[0];
	else
		return (st[0]+ans);
}


int main()
{
    ios_base::sync_with_stdio(false);
    string st;
    getline(cin,st);
    out(movex(st));
    return 0;
}