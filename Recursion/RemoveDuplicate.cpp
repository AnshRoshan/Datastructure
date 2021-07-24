//#include <bits/stdc++.h>
#include <iostream>
#include <array>

using namespace std;

#define out(st) cout << st << endl ;
#define in(num) cin >> num;

string remove(string st)
{	
	if(st.size()==0)
		return "";
	string ans=remove(st.substr(1));
	if(st[0]==ans[0])
		return ans;
	else
		return (st[0]+ans);
}


int main()
{
    ios_base::sync_with_stdio(false);
    string st;
    getline(cin,st);
    out(remove(st));
    return 0;
}