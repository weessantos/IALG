#include <iostream>
using namespace std;
 
typedef struct{
	float p1;
	float p2;
} Posicao;
 
typedef struct{
	float v1;
	float v2;
} Velocidade;

typedef struct{
	Posicao posicao;
	Velocidade velocidade;
} Carro;

int main(){
	
	Carro carro;
	    
	float t;
	   
	cin >> carro.posicao.p1 >> carro.posicao.p2 >> carro.velocidade.v1 >> carro.velocidade.v2 >> t;
	cout << (carro.posicao.p1 + (carro.velocidade.v1 * t)) << " " << (carro.posicao.p2 + (carro.velocidade.v2 * t)) << endl;
	   
	return 0;
}