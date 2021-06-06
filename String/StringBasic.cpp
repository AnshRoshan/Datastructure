#include <bits/stdc++.h>
using namespace std;

int main()
{
	string st="Good morning";
	string str("hello");
	// cin>>str; // for input the words.
	// cout<<st<<", "<<str<<endl;

	// Inputting the string sentence
	// getline(cin,str);
	// cout<<st<<", "<<str<<endl;

	// Appending the string
	// st= "An";
	// str="sh";
	// st.append(str);
	// cout << st<<endl;
	// st+=str;
	// cout << st<<endl;
	// temporary addition or contactanation of the strings
	// cout << st+str << endl;
	// cout << st << str << endl;

	// how to acess the specific character
	// st="Ansh Roshan";
	// cout << st.max_size()<<endl;
	// cout << st.size()<<endl;	// equivalent to length
	// cout << st.capacity()<<endl;	// 	capacity is usually multiple of 15 block reserved for string.
	// cout << st.length()<<endl;
	// cout << st.front()<<endl;// Acess the first character of the string.
	// cout << st.back()<<endl;// Acess the last character of the string.
	// cout << st[0]<<endl;
	// cout << st.at(0)<<endl;// Acess the index of the string.

	// st.clear();
	// if(st.empty())
		// st="empty";
	// cout << st<<endl;

	// st="Ansh";
	// str="Anni";
	// cout<<st.compare(str)<<endl;
	// cout<< str.compare(st)<<endl;

	// str.erase(2,2);// (starting, no of chracter)
	// cout << str<<endl;

	cout << st.find("o")<<endl;// find the length of the string
	size_t t= st.find("A");
	cout << t<<endl;
	cout << endl;

	// cout<< st.insert(2,"Xion")<<endl;// at the index

	// cout<< st.substr(2,4)<<endl;// (starting, no of chracter)

	// str="78898";
	// int num= stoi(str);
	// num%=100;
	// cout<< num<<endl;
	// str=to_string(num);
	// str=str+"10";
	// cout << str <<endl;

	// st="AnshRoshan";
	// sort(st.begin(),st.end());
	// cout << st<<endl;
	// return 0;
}
