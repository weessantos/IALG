#include <iostream>
using namespace std;

void insertionHalf(int *vector, int size){
	
	int half;
	
	if(size%2==0){
		half = size/2;
	}
	else {
		half = (size/2)+1;
	}
	
	for( int i = 1; i < half; i++ ) {
		for( int j = i; j > 0; j-- ) {
			if( vector[j] < vector[j-1] )
				swap( vector[j], vector[j-1] );
		}
	}
	
	for( int i = size-1; i > half; i-- ) {
			for( int j = i; j > half; j-- ) {
				if( vector[j] > vector[j-1] )
					swap( vector[j], vector[j-1] );
		}
	}
	
}

int main(int argc, char *argv[]) {

	int n;
	cin >> n;
	
	int vet[n];
	
	for(int i=0; i<n; i++){
		cin >> vet[i];
	}
	
	insertionHalf(vet, n);
	
	for(int i=0; i<n; i++){
		cout << vet[i] << " ";
	}
	cout << endl;
	
	return 0;
}