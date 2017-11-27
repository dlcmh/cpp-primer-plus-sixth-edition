// integer and floating-point division

#include <iostream>

/*
Integer division: 9/5 = 1
Floating-point division: 9.0/5.0 = 1.800000
Mixed division: 9.0/5 = 1.800000
double constants: 1e7/9.0 = 1111111.111111
float constants: 1e7f/9.0f = 1111111.125000

Remember, floating-point constants are type double by default.
*/

int main()
{
	using namespace std;

	cout.setf(ios_base::fixed, ios_base::floatfield);

	cout << "Integer division: 9/5 = " << 9 / 5 << endl;
	cout << "Floating-point division: 9.0/5.0 = "
	     << 9.0 / 5.0 << endl;
	cout << "Mixed division: 9.0/5 = " << 9.0 / 5 << endl;
	cout << "double constants: 1e7/9.0 = " << 1.e7 / 9.0 << endl;
	cout << "float constants: 1e7f/9.0f = " << 1.e7f / 9.0f << endl;

	return 0;
}
