// reading more than one string

#include <iostream>

/*
	Enter your name:
	David Chin
	Enter your favorite dessert:
	I have some delicious Chin for you, David.
*/

int main() {
	using namespace std;

	const int ArSize = 20;
	char name[ArSize];
	char dessert[ArSize];

	cout << "Enter your name:\n";
	cin >> name;
	cout << "Enter your favorite dessert:\n";
	cin >> dessert;
	cout << "I have some delicious " << dessert;
	cout << " for you, " << name << ".\n";

	return 0;
}
