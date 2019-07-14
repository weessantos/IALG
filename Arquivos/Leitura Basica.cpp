#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
	string line;
		
	string txt;
	
	cin >> txt;
		
	ifstream myfile (txt); // ifstream = padrão ios:in
	if (myfile.is_open())
	{
		while (! myfile.eof() )		//while end of file == false
		{
			getline (myfile,line); 
			cout << line << endl;
		}
		myfile.close();
	}

	else cout << "Unable to open file"; 
	
	return 0;
}