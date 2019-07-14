#include <iostream>
#include <cstring>

using namespace std;
	
	typedef struct 
	{
		char nome[20];
		char sexo;
		float altura;
		float peso;
	} Dados;

int main(){
	int qnt, macho=0, femea=0;
	char sexo;
	float IMCM = 0.0, IMCF = 0.0;

	cin >> qnt;
	
	Dados vdados[qnt];

	for(int i = 0;i < qnt; i++)
		cin >> vdados[i].nome >> vdados[i].altura >> vdados[i].peso >> vdados[i].sexo;
		
	cin >> sexo;
	
	if(sexo=='M'){
		for(int i=0; i<qnt; i++){
			if(vdados[i].sexo == sexo){
			macho++;
			IMCM+=((vdados[i].peso)/(vdados[i].altura*vdados[i].altura));
			}		
		}
		
		IMCM = IMCM/macho;
		
		for(int j=0; j<qnt; j++){
			if(vdados[j].sexo == 'M'){
				if(((vdados[j].peso)/(vdados[j].altura*vdados[j].altura))> IMCM){
					cout << vdados[j].nome <<endl;
					
				}
			}
		}
	}
	
	if(sexo=='F'){
			for(int i=0; i<qnt; i++){
				if(vdados[i].sexo == sexo){
				femea++;
				IMCF+=((vdados[i].peso)/(vdados[i].altura*vdados[i].altura));
				}		
			}
			IMCF = IMCF/femea;
		
			for(int j=0; j<qnt; j++){
				if(vdados[j].sexo == 'F'){
					if(((vdados[j].peso)/(vdados[j].altura*vdados[j].altura))> IMCF){
						cout << vdados[j].nome <<endl;
					
				}
			}
		}
	}

	
	return 0;
}