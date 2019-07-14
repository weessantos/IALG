#include <iostream>

using namespace std;
int main() {
	
	int x;
	float result;
	cin >> x;

	float vector[x];
	float vector2[x];
	
	for(int i=0; i < x; i++){
		cin >> vector[i];
	}
	
	for(int j=0; j < x; j++){
		cin >> vector2[j];
	}
	
	for(int k=0; k < x; k++){
		result+=vector[k]*vector2[k];
	}
	
	cout << result <<endl;
	
	return 0;
}