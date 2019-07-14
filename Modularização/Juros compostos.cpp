#include <iostream>
#include <math.h>
using namespace std;

float calculo(float v, float j, float a, float f,  int t);

int main(){
	
	float valor, juros, aux=0, final=0;
	int tempo;
		
	cin >> valor >> juros >> tempo;
	
	final = calculo(valor, juros, aux, final, tempo);
	
	cout << final <<endl;

	return 0;
}

float calculo(float v, float j, float a, float f,  int t){
	
	j = j/100;
	a = pow(j+1, t);
	f= v*a;
	
	return f;
	
} 




