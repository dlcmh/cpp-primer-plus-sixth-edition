// displays a message

#include <iostream> // a PREPROCESSOR directive

int main() { // function header; { starts function body

  // make definitions visible; using a directive
  // lazy approach, all name available
  using namespace std;
  // alternatively ...
  // using std::cout;
  // using std::endl;

  cout << "Come up and C++ me some time."; // message
  cout << endl; // start a new line
  cout << "You wont't regret it!" << endl; // more output

  return 0; // terminate main()
} // } ends function body
