#include <iostream>
using namespace std;

void selectionSort(int *vector, int size){
	
int k, pos = size - 1, cont = 1;

	for( int i = 0; i < size-1; i++ ){
	k = 0;
	
		for( int j = size - cont; j > 0; j-- ){
			if(vector[j] > vector[k]) 
				k = j;
		}
		
		swap( vector[pos], vector[k] );
		
		for(int v=0; v<size; v++){
			cout << vector[v] << " ";
		}
		
		cout << endl;
		pos--;
		cont++;
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
	
	return 0;
}