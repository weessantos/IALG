#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
	string txt;
	string content;
	
	cin >> txt;
	cin >> content;
	
	ofstream myfile (txt); // ofstream = padrão ios:in
	if (myfile.is_open())
	{
		myfile << content << endl;
		
		myfile.close();
	}

	return 0;
}