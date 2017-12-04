// display values in hex and octal

#include <iostream>

// so we don't have to write std::cout, std::endl, std::hex & std:oct
// Warning: it also means we can't use variables named hex & oct
using namespace std;

int main()
{
	int chest = 42;
	int waist = 42;
	int inseam = 42;

	cout << "Monsieur cuts a striking figure!" << endl;
	cout << "chest = " << chest << " (42 in decimal)" << endl;

	cout << hex; // manipulator for changing number base
	cout << "waist = " << waist << " (hexadecimal for 42)" << endl;

	cout << oct; // manipulator for changing number base
	cout << "inseam = " << inseam << " (octal for 42)" << endl;

	return 0;
}
