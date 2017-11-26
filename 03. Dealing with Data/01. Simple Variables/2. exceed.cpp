// exceeding some integer limits

#include <iostream>
#include <climits> // defines INT_MAX as largest int value

// #ifndef ZERO - commented out - auto-inserted by Atom editor
#define ZERO 0 // makes ZERO symbol for 0 value
// #endif - commented out - auto-inserted by Atom editor

int main()
{
	using namespace std;

	short sam = SHRT_MAX; // initialize a variable to max value
	unsigned short sue = sam; // ok if variable sam already defined

	cout << "Sam has " << sam << " dollars and Sue has " << sue;
	cout << " dollars deposited." << endl
	     << "Add $1 to each account." << endl << "Now ";

	sam = sam + 1; // causes overflow from 32767 to -327768
	sue = sue + 1;
	cout << "Sam has " << sam << " dollars and Sue has " << sue;
	cout << " dollars deposited.\nPoor Sam!" << endl;

	sam = ZERO;
	sue = ZERO;
	cout << "Sam has " << sam << " dollars and Sue has " << sue;
	cout << " dollars deposited." << endl;

	cout << "Take $1 from each account." << endl << "Now ";
	sam = sam - 1;
	sue = sue - 1; // causes underflow from 0 to 65535
	cout << "Sam has " << sam << " dollars and Sue has " << sue;
	cout << " dollars deposited." << endl << "Lucky Sue!" << endl;

	return 0;
}
