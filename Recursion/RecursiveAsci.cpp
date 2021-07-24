//#include <bits/stdc++.h>
#include <iostream>
#include <array>

using namespace std;

#define out(st) cout << st << endl ;
#define in(num) cin >> num;

void substring(string st,string ans)
{	
	if(st.size()==0)
	{	out(ans)
		return ;
	}
	substring(st.substr(1),ans);
	substring(st.substr(1),ans+st[0]);
	substring(st.substr(1),ans+to_string((int)st[0]));
}


int main()
{
    ios_base::sync_with_stdio(false);
    string st;
    getline(cin,st);
    substring(st,"");
    return 0;
}