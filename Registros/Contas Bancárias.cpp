#include <iostream>
#include <cstring>

using namespace std;

typedef struct 
{
	int conta;
	char nome[100];
} Registro;

typedef struct 
{
	int conta;
	char desc[250];
	float valor;
} Transferencia;

int main(){
	int c=0;
	
	Registro vetorReg[20];
	
	Transferencia vetorTrans[100];
	
	int con = 0;

	while(c<20 && con>=0){
		
		cin >> con;
		
		if(con >= 0){
		
			vetorReg[c].conta = con;
		
			cin >> vetorReg[c].nome;
		
			c++;
		
		}
	}

	int totalconta = c;
	int contasvetor[c];

	c=0;
	con=0;

	while(c<100 && con>=0){
		
		cin >> con;
		
		if(con >=0){
		
			vetorTrans[c].conta = con;
		
			cin >> vetorTrans[c].desc >> vetorTrans[c].valor;

			c++;
		
		}
	}

	int totaltrans = c;

	c=0;
	con=0;

	while(c<=totalconta && con >=0){

		cin >> con;
		
		if(con>=0){
		
			contasvetor[c] = con;

			c++;
		
		}
	}

	for(int i = 0; i < totalconta; i++){
		
		for(int j = 0; j < totalconta; j++){
			
			if(vetorReg[j].conta == contasvetor[i]){
				
				cout << vetorReg[j].nome << endl;
				
				for(int x = 0;x < totaltrans; x++){

					if(contasvetor[i] == vetorTrans[x].conta){
		
						cout << vetorTrans[x].desc << " " << vetorTrans[x].valor << endl;
					}
				}
			}
		}
	}

	return 0;
}