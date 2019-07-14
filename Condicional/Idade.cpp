#include <iostream>

using namespace std;
int main() {
	
	int idade, meses, semanas, dias;
	
	cin >> idade;
	
	meses = idade*12;
	semanas = idade*48;
	dias = idade*360;
	
	cout << meses <<endl;
	cout << semanas <<endl;
	cout << dias <<endl;
}