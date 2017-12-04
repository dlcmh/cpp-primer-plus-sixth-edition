// shows hex and octal literals

/*
C++ uses the first digit or two to identify the base of a number constant.

If the first digit is in the range 1–9, the number is base 10 (decimal); thus
93 is base 10.

If the first digit is 0 and the second digit is in the range 1–7, the number
is base 8 (octal); thus 042 is octal and equal to 34 decimal.

If the first two characters are 0x or 0X, the number is base 16 (hexadecimal);
thus 0x42 is hex and equal to 66 decimal. For hexadecimal values, the
characters a–f and A–F represent the hexadecimal digits corresponding to the
values 10–15. 0xF is 15 and 0xA5 is 165 (10 sixteens plus 5 ones)
*/

#include <iostream>

int main()
{
	using namespace std;

	int chest = 42; // decimal integer literal
	int waist = 0x42; // hexadecimal integer literal
	int inseam = 042; // octal integer literal

	cout << "Monsieur cuts a striking figure!\n";
	cout << "chest = " << chest << " (42 in decimal)\n";
	cout << "waist = " << waist << " (0x42 in hex)\n";
	cout << "inseam = " << inseam << " (042 in octal)\n";

	return 0;
}
