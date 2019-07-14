#include <iostream>

using namespace std;
int main() {
	
	int age;
	
	cin >> age;
	
	if(age < 5){
		cout << "Nao registrado" <<endl;
	}
	
	else if(age >= 5 and age <= 7){
		
		cout << "Infantil" <<endl;
	}
	
	else if(age >= 8 and age <= 10){
		
		cout << "Juvenil" <<endl;
	}
	
	else if(age >= 11 and age <= 15){
		
		cout << "Adolescente" <<endl;
	}
	
	else if(age >= 16 and age <= 30){
		
		cout << "Adulto" <<endl;
	}
	
	else {
		
		cout << "Senior" <<endl;
	}
	
	return 0;
}


//Categoria	Idade
//Infantil	5 a 7
//Juvenil	8 a 10
//Adolescente	11 a 15
//Adulto	16 a 30
//Sênior	Acima de 30
