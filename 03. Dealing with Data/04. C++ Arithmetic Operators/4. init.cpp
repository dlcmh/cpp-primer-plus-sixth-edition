// type changes on initialization

#include <iostream>

/*
g++ -Wall "4. init.cpp"
4. init.cpp:21:12: warning: implicit conversion from 'double' to 'int' changes value from 3.9832 to 3
      [-Wliteral-conversion]
        int guess(3.9832); // double converted to int
            ~~~~~ ^~~~~~
4. init.cpp:22:13: warning: implicit conversion from 'double' to 'int' changes value from 7.2E+12 to 2147483647
      [-Wliteral-conversion]
        int debt = 7.2E12; // result not defined in C++

tree = 3.000000
guess = 3
debt = -528766584
*/

int main()
{
	using namespace std;

	cout.setf(ios_base::fixed, ios_base::floatfield);

	float tree = 3; // int converted to float
	int guess(3.9832); // double converted to int
	int debt = 7.2E12; // result not defined in C++

	cout << "tree = " << tree << endl;
	cout << "guess = " << guess << endl;
	cout << "debt = " << debt << endl;

	return 0;
}
