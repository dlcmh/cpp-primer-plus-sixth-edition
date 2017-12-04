// reading more than one word with getline

#include <iostream>

/*
	Enter your name:
	David Chin
	Enter your favorite dessert:
	Lime Pie
	I have some delicious Lime Pie for you, David Chin.
*/

int main() {
	using namespace std;

	const int ArSize = 20;
	char name[ArSize];
	char dessert[ArSize];

	cout << "Enter your name:\n";
	cin.getline(name, ArSize); // reads through newline
	cout << "Enter your favorite dessert:\n";
	cin.getline(dessert, ArSize);
	cout << "I have some delicious " << dessert;
	cout << " for you, " << name << ".\n";

	return 0;
}
