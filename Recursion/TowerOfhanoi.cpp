//#include <bits/stdc++.h>
#include <iostream>
#include <array>

using namespace std;

#define out(st) cout << st << endl ;
#define in(num) cin >> num;

void hanoi(int block,char src,char helper,char dest)
{	
	if(block==0)
		return;

	// we want to n-1 to be in mid(helper) with the help of final
	// i.e we use final to be heper and mid to be final
	hanoi(block-1,src,dest,helper);
	
	out("Move from "<< src << "	to	" << dest )

	// once we have the n-1 block in mid now we move opposite
	// i.e to transfer them using src(initial) to dest(final)
	// position.
	hanoi(block-1,helper,src,dest);
}

int main()
{
    ios_base::sync_with_stdio(false);
    int num;
    in(num);
    hanoi(num,'A','B','C');
    return 0;
}
