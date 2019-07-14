#include <iostream>

using namespace std;
int main() {
	
	float salario, salario_dolar, salario_euro, salario_libra;
	
	cin >> salario;
	
	salario_dolar = salario/2.13;
	salario_euro = salario/2.84;
	salario_libra = salario/3.34;
	

	std::cout.precision(2);
	std::cout << std::fixed << salario_dolar<<endl;
	std::cout << std::fixed << salario_euro<<endl;
	std::cout << std::fixed << salario_libra;
	}