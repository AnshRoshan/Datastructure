//#include <bits/stdc++.h>
#include <iostream>
#include <array>

using namespace std;

#define out(st) cout << st << endl ;
#define in(num) cin >> num;

string key[]={"","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

void keypad(string st,string ans)
{	
	if(st.size()==0)
	{	out(ans)
		return ;
	}
	string pad = key[st[0]-'0'];
	for (long unsigned int i = 0; i < pad.length(); ++i)
		keypad(st.substr(1),ans+pad[i]);
}


int main()
{
    ios_base::sync_with_stdio(false);
    string st;
    getline(cin,st);
    keypad(st,"");
    return 0;
}