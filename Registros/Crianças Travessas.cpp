#include <iostream>
#include <cstring>
using namespace std;

typedef struct 
{
	char nome[100];
	char brinquedo[100];
	int boas;
	int mas;
} Cartinha;


int main(){

	int qntcartas;
	int cont =0;
	cin>>qntcartas;

	Cartinha vcartinhas[qntcartas];					

	for(int i=0; i<qntcartas; i++){
		cin >> vcartinhas[i].nome >> vcartinhas[i].brinquedo >> vcartinhas[i].boas >> vcartinhas[i].mas;
	}
	

	for(int i=0; i<qntcartas; i++){
			if((vcartinhas[i].mas > vcartinhas[i].boas) or (vcartinhas[i].mas == vcartinhas[i].boas)){
				cout << vcartinhas[i].nome << " ";
				cont++;
			}

	}
	if(cont==0){
		cout << "Ninguem" <<endl;
		
		}

	return 0;
}