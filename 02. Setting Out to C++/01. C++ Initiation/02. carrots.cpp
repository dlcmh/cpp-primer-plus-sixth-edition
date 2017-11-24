// food processing program
// uses and displays a variable

#include <iostream>

int main()
{
  using namespace std;

  int carrots; // declare an integer variable

  carrots = 25; // assign a value to the variable

  cout << "I have ";

  // display the value of the variable
  // cout auto-coerces integer 25 to a character string
  cout << carrots;

  cout << " carrots.";
  cout << endl;

  carrots = carrots - 1; // modify the variable
  cout << "Crunch, crunch. Now I have " << carrots << " carrots." << endl;

  return 0;
}
