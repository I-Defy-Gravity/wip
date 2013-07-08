#include <iostream>
#include <string>
#include <sstream>

using namespace std;

string reader()
{
  string input = "";
	
	cout << "Please enter a valid sentence (with spaces):\n>";
	
	getline(cin, input);
	
	cout << "You entered: " << input << endl << endl;
	
	return input;
}
