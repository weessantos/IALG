#include <iostream>

using namespace std;

void selectionSort(int *vector, int size){
	
int k;
	for( int i = 0; i < size; i++ ){
	k =i;
		for( int j = size - 1; j > i; j-- ){
			if(vector[j] < vector[k]) 
				k = j;
		}
	swap( vector[i], vector[k] );
	}
}

int main(int argc, char *argv[]) {
	
	int n;
	
	cin >> n;
	
	int vet[n];
	
	for(int i=0; i<n; i++){
		cin >> vet[i];
	}

	selectionSort(vet, n);

	for(int i=0; i<n; i++){
		cout <<vet[i] << " " ;
	}
	
	return 0;
}