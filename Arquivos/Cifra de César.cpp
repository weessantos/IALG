#include <iostream>
#include <fstream>
using namespace std;

int main() {
	string arquivo;
	
	cin >> arquivo;
	
	ifstream inputFile(arquivo.c_str());
	ofstream outputFile("cifrado");
	
	if (inputFile and outputFile) {
		string palavra;
		while(inputFile >> palavra) {
			int tamPalavra = palavra.length();
			for (int i = 0; i < tamPalavra; i++)
			{
				if (palavra[i] < 88) {
					palavra[i] = (palavra[i]+3);
				}
				
				else 
					palavra[i] = palavra[i]-23;
				
			}
			outputFile << palavra <<" ";
		}
	}
	
	inputFile.close();
	outputFile.close();		
	
	return 0;
}
