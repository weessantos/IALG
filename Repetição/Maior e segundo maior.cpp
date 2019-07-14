#include <iostream>

using namespace std;
int main() {
	
	int cont = 0;
	float n, aux=0, maior=0, segundo_maior=0;
	
	while(cont<7){
		
		cont ++;
		cin >> n;
		aux+=n;
		
		if(n!=maior and n>maior){
			maior = n;
		}
		if(n<maior and n>=segundo_maior){
			segundo_maior = n;
		}
		
	}
		cout << maior <<endl;
		cout << segundo_maior <<endl;
		
		aux = aux-maior;
		aux = aux-segundo_maior;
		
		cout << aux/5 <<endl;
		
	return 0;
	
}