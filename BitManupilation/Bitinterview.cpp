// Conversion into Binary code//
 
#include <iostream>

using namespace std;

int main()
{
	auto number = 0b011;
	cout << number;
	return 0;
	
}


// Direct XOR of all numbers from 1 to n
int computeXOR(int n)
{
	if (n % 4 == 0)
		return n;
	if (n % 4 == 1)
		return 1;
	if (n % 4 == 2)
		return n + 1;
	else
		return 0;
}

// Function to check if x is power of 2
bool isPowerOfTwo(int x)
{
	// First x in the below expression is
	// for the case when x is 0
	return x && (!(x & (x - 1)));
}

// num is the number and pos is the position 
// at which we want to set the bit.
void set(int & num,int pos)
{
     // First step is shift '1', second
     // step is bitwise OR
     num |= (1 << pos);
}
int main()
{
     int num = 4, pos = 1;
     set(num, pos);
     cout << (int)(num) << endl;
     return 0;
}


// First step is to get a number that  has all 1's except the given position.
void unset(int &num,int pos)
{
    //Second step is to bitwise and this  number with given number
    num &= (~(1 << pos));
}
int main()
{
    int num = 7;
    int  pos = 1;
    unset(num, pos);
    cout << num << endl;
    return 0;
}


// First step is to shift 1,Second step is to XOR with given number
void toggle(int &num,int pos)
{
    num ^= (1 << pos);
}
int main()
{
    int num = 4;
    int pos = 1;
    toggle(num, pos);
    cout << num << endl;
    return 0;
}

bool at_position(int num,int pos)
{
    bool bit = num & (1<<pos);
    return bit;
}
  
int main()
{
    int num = 5;
    int pos = 0;
    bool bit = at_position(num, pos);
    cout << bit << endl;
    return 0;
}
