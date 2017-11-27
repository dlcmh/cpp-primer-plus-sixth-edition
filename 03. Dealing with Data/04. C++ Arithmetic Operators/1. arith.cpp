// some C++ arithmetic

#include <iostream>

/*
Note that floats don't give sufficient precision...

Enter a number: 50.25
Enter another number: 11.17

hatsF = 50.250000; headsF = 11.170000
hatsF + headsF = 61.419998
hatsF - headsF = 39.080002
hatsF * headsF = 561.292480
hatsF / headsF = 4.498657

hatsD = 50.250000; headsD = 11.170000
hatsD + headsD = 61.420000
hatsD - headsD = 39.080000
hatsD * headsD = 561.292504
hatsD / headsD = 4.498657
*/

int main()
{
	using namespace std;

	float hatsF, headsF;
	double hatsD, headsD;

	cout.setf(ios_base::fixed, ios_base::floatfield); // fixed-point
	cout << "Enter a number: ";
	cin >> hatsF;
	hatsD = hatsF;
	cout << "Enter another number: ";
	cin >> headsF;
	headsD = headsF;

	cout << endl;

	cout << "hatsF = " << hatsF << "; headsF = " << headsF << endl;
	cout << "hatsF + headsF = " << hatsF + headsF << endl;
	cout << "hatsF - headsF = " << hatsF - headsF << endl;
	cout << "hatsF * headsF = " << hatsF * headsF << endl;
	cout << "hatsF / headsF = " << hatsF / headsF << endl;

	cout << endl;

	cout << "hatsD = " << hatsD << "; headsD = " << headsD << endl;
	cout << "hatsD + headsD = " << hatsD + headsD << endl;
	cout << "hatsD - headsD = " << hatsD - headsD << endl;
	cout << "hatsD * headsD = " << hatsD * headsD << endl;
	cout << "hatsD / headsD = " << hatsD / headsD << endl;

	return 0;
}
