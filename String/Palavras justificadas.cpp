#include <iostream>

using namespace std;
int main() {
	
	int n, asterisk=0, bigger=0;
	cin >>n;
	
	char word[n][20];
	
	for(int i=0; i<n; i++){
		cin >> word[i];
	}
	
	bigger = strlen(word[0]);
	
	for(int j=1; j<n; j++){	
		
		if(bigger < strlen(word[j])){
			bigger = strlen(word[j]);
		}
		
	}
	
	for(int k=0; k<n; k++){
		
		if(strlen(word[k]) < bigger){
			asterisk =  bigger - strlen(word[k]);
			while(asterisk > 0){
				cout << "*";
				asterisk--;
			}
			cout << word[k] <<endl;
		}
		
		else									
			cout << word[k] <<endl;
		
	}

	return 0;
}