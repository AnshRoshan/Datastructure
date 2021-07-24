//#include <bits/stdc++.h>
#include <iostream>
#include <array>

using namespace std;

#define out(st) cout << st << endl ;
#define in(num) cin >> num;

void permut(string st,string ans)
{
	if(st.size()==0)
	{	out(ans)
		return ;
	}
	for (long unsigned int i = 0; i < st.length(); ++i)
		permut(st.substr(0,i)+st.substr(i+1),ans+st[0]);
}	

int main()
{
    ios_base::sync_with_stdio(false);
    string st;
    getline(cin,st);
    permut(st,"");
    return 0;
}