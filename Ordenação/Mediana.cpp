#include <iostream>

using namespace std;

void insertionSort(float* vector, int size){
	
	for( int i = 1; i < size; i++ ) {
		for( int j = i; j > 0; j-- ) {
			if( vector[j] < vector[j-1] )
				swap( vector[j], vector[j-1] );
		}
	}
}

int main() {

	int pos=0, cont=0;
	
	float n, med;
	
	float vet[20] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	
	bool bvet = true;
	
	while(bvet == true){
		
		cin >> n;
		if(n > 0){
			vet[pos] = n;
			pos++;
			cont++;
		}
		
		else if(n  < 0){
			bvet = false;
		}
		
	}
	float vet2[cont];
	
	insertionSort(vet, 20);
	
	int j=0;
	
	for(int i=0; i<20; i++){
		
		if(vet[i] != 0){	
			vet2[j] = vet[i];
			j++;
		}
	}
		
		
	if(cont%2==0){
		med = (vet2[(cont/2)-1] + (vet2[cont/2]))/2;
		cout << med;
	}
	
	if(cont%2!=0){
		med = vet2[(cont/2)];
		cout << med;
	}	
	
	return 0;
}