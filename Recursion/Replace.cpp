//#include <bits/stdc++.h>
#include <iostream>
#include <array>

using namespace std;

#define out(st) cout << st << endl ;
#define in(num) cin >> num;

void pie(string st)
{
	if(st.size()==0)
		return;
	if(st[0]=='p' && st[1]== 'i')
	{
		cout <<"3.14";
		pie(st.substr(2));
	}
	else
	{
		cout <<st[0];
		pie(st.substr(1));
	}
}

int main()
{
    ios_base::sync_with_stdio(false);
    string st;
    getline(cin,st);
    pie(st);
    return 0;
}