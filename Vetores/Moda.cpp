#include <iostream>

using namespace std;
void insertionSort(int *vector, int size);
int main() {
	
	int vector[7];
	int moda=0, repet=0, chars=1, chars2=1;
	
	for(int i=0; i < 7; i++){
		cin >> vector[i];
	}
	
	insertionSort(vector, 7);
	
	for(int j=0; j < 7; j++){
		if((vector[j] == vector[j+1]) and (vector[j]!=repet) and (chars<2)){
			moda++;
			chars++;
			repet = vector[j];
			cout << "numeros de caracteres da moda: "<< chars <<endl;
			cout << "vetor j: "<< vector[j] <<endl;
			cout << "vetor j+1: "<< vector [j+1] <<endl;
			cout << "repet no primeiro passo: "<< repet <<endl;
			cout << "velor de j no primeiro passo: "<< j <<endl;
		}	
		
		else if((vector[j] == vector[j+1]) and (vector[j]==repet)){
			chars++;
			cout << "valor de j no segundo passo: "<< j <<endl;
			cout << "vetor j: "<< vector[j] <<endl;
			cout << "vetor j+1: "<< vector [j+1] <<endl;
			cout << "numeros de caracteres da moda aqui: "<< chars <<endl;
			cout << "repet: "<< repet <<endl;
			
				if(chars == 4){
					moda = 1;
					j=7;
				}
		}
	
		else if((vector[j] == vector[j+1]) and (vector[j]!=repet) and (chars==3)){
			chars2++;
			repet = vector[j];
		}
		
		else if((vector[j] == vector[j+1]) and (vector[j]==repet) and (chars==3)){
			chars2++;
			moda = 2;
			j=7;
		}
		
		else if((vector[j] == vector[j+1]) and (vector[j]!=repet) and (chars==2)){
			chars2++;
			moda++;
		}
	}
		if(chars2 < chars){
			moda = 1;	
		cout << moda <<endl;
		cout << "numeros de caracteres da moda: "<< chars2 <<endl;
		}
		
		else{
			cout << moda <<endl;
			
		}
	
	return 0;	
	
}

void insertionSort(int *vector, int size){							//Vector ordenation
	
	for( int i = 1; i < size; i++ ) {
		for( int j = i; j > 0; j-- ) {
			if( vector[j] < vector[j-1] )
				swap( vector[j], vector[j-1] );
		}
	}
}