#include <iostream>
#include <math.h>
#include <vector>

using namespace std;
void insertionSort(int *vector, int size);
int main() {
	
	int n, cont =1, repeat, pos, order = 0;
	cin >> n;
	
	int vector_n[n];
	
	for(int i=0; i<n; i++){
		cin >> vector_n[i];
	}
	
	insertionSort(vector_n, n);					//Function call

	
	for(int j=0; j<n; j++){						
		if(vector_n[j]==vector_n[j+1]){
			repeat = vector_n[j];
			cont++;
			pos = j - order;					//Ordering result in first case
			order++;						//Ordering independently first or last number	
		}
	}
	
	//cout << "a posicao é: "<< pos <<endl;					//Auxiliarie result position
	
	
	if(cont%2==0){
		vector_n[pos]= repeat * cont;						//Exercise mod 0 condition
	}
	else if(cont%2!=0){
		vector_n[pos] = pow(vector_n[pos], cont);			//Exercise mod 1 condition
	}

	
	//cout << "O contador é: "<< cont <<endl;					//Auxiliaries counters
	//cout << "Mod de cont por 2 é : "<< cont%2 <<endl;
	//cout << "o numero repetido é : "<< repeat <<endl;
	
	
	for(int k=0; k<n; k++){
		if(k==0){
			if ((vector_n[k] != vector_n[k+1])  and (vector_n[k] != repeat))		
			//Output without repeat number (2 numbers case)
			
			cout << vector_n[k]<< " ";
			}
		if(k>0){
			if((vector_n[k] != vector_n[k+1]) and (vector_n[k] != vector_n[k-1]) and (vector_n[k] != repeat)){
			//Output without repeat number (3 or more numbers case)
			
			cout << vector_n[k]<< " ";
			}
		}
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
