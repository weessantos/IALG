#include <iostream>

using namespace std;
int main() {
	
	char letra;
	cin >> letra;
	
	if (isupper (letra)){
		
		cout << "MAIUSCULA" <<endl;
	}
	
	else{
		
		cout << "MINUSCULA" <<endl;
	}
	
	return 0;
}