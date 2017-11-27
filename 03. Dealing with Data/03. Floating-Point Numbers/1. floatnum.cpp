// floating point types

#include <iostream>

int main()
{
	using namespace std;

	// prevents the program from switching to E notation for large values and
	// causes the program to display six digits to the right of the decimal.
	cout.setf(ios_base::fixed, ios_base::floatfield); // fixed-point

	float tub = 10.0 / 3.0; // precise to about 6 places
	double mint = 10.0 / 3.0; // precise to about 15 places
	const float million = 1.0e6;

	cout << "tub = " << tub;
	cout << ", a million tubs = " << million * tub;
	cout << ",\nand ten million tubs = ";
	cout << 10 * million * tub << endl;

	cout << "mint = " << mint << " and a million mints = ";
	cout << million * mint << endl;

	return 0;
}
