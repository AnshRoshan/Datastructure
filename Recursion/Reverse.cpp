//#include <bits/stdc++.h>
#include <iostream>
#include <array>

using namespace std;

#define out(st)  cout << st <<  endl ;
#define in(num)  cin >> num;

void reverse(string st,int num)
{
	out(st[num])
	if(num==0)
		return;
	reverse(st,num-1);
}

int main()
{
    ios_base::sync_with_stdio(false);
	string st;
    getline(cin,st);
    reverse(st,st.size()-1);
    return 0;
}