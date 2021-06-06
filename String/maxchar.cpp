#include <bits/stdc++.h>
using namespace std;

int main()
{
	string st;
	getline(cin,st);

	int alpha[26];
	for (int i = 0; i < 26; i++)
		alpha[i]=0;

	for (int i = 0; i < st.size(); i++)
		alpha[st[i]-'a']++;

	int max=0,index=0;
	for(int i=0;i<26;i++)
		if(alpha[max]<alpha[i])
			max=i;

	cout << alpha[max] <<"  "<<(char)('a'+max) << endl;
	return 0;
}
