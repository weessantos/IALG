#include <iostream>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
using namespace std;

int main()
{
	int i = 0;
	int numWords = 0;
	int repeat = 0;
	char* words[50];
	string sought;
	string line;
	string txt;
		
	cin >> txt;
	cin >> sought;
			
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

	while(fgets(line, size_t line, myfile ) != NULL)
	{
		words[i] = strdup(line);

		i++;
				
		numWords++;
	}
	
	for(int j=0; j<numWords; j++){
		if((strcmp(word[j], sought)==0)){
			repeat++;
		}
	}
	

	return 0;
}