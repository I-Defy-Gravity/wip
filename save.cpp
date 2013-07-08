#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

string save(string p)
{
  using namespace std;
	fstream file;
	file.open("output.txt");
	file << p;
	file.close();
	return "n";
}
