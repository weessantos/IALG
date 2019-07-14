#include <iostream>

using namespace std;

int main() {
	
	int vector[15];
	
	for(int i=0; i<15; i++){
		cin >> vector[i];
	}
	
	int bigger = vector[0];
	
	for(int j=0; j<15; j++){
		if(bigger < vector[j]){
			bigger = vector[j];
		}
	}
	
	cout << "\n";
	for(int k=0; k<15; k++){
		cout << vector[k]/bigger << " ";
	}
	
	return 0;
}

