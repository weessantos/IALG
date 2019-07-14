#include <iostream>
#include <string>

using namespace std;
int main(int argc, char *argv[]) {
	
	int vogal=0;
	char word[20];
	
	cin >> word;
	
	for(int i =0; i<20; i++){
		if((word[i] == 'a') or (word[i] == 'e') or (word[i] == 'i') or (word[i] == 'o') or (word[i] == 'u' )){
			vogal++;
		}
	}
	
	cout << vogal <<endl;
	
	return 0;
	
}