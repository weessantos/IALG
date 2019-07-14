#include <iostream>
using namespace std;

void biggerSort(int *vector, int size){						//Ascending order
		
	for( int i = 1; i < size; i++ ) {
		for( int j = i; j > 0; j-- ) {
			if( vector[j] < vector[j-1] )
				swap( vector[j], vector[j-1] );
		}
	}
}

void smallerSort(int *vector, int size){					//Descending order
	
	for( int i = 1; i < size; i++ ) {
		for( int j = i; j > 0; j-- ) {
			if( vector[j] > vector[j-1] )
				swap( vector[j], vector[j-1] );
		}
	}
}

int main(int argc, char *argv[]) {
	
	int n, v=0;
	cin >>n;
	
	int mat[n][n];
	int vet[n];
	
	for(int i=0; i<n; i++){					//Input
		for(int j=0; j<n; j++){
			cin >> mat[i][j];
		}
	}
	
	
	
	for(int i=0; i<n; i++){					//Lines
		for(int j=0; j<n; j++){				//Columns
			vet[v] = mat[i][j];
			v++;
			}
			
			if(i%2==0){					//Ascending order
				biggerSort(vet, n);
				v=0;
				for(int k=0; k<n; k++){
					mat[i][k] = vet[v];
					v++;
				}
			}
			
			if(i%2!=0){					//Descending order
				smallerSort(vet, n);
				v=0;
				for(int l=0; l<n; l++){
					mat[i][l] = vet[v];
					v++;
				}
			}
			v=0;
	}
		
	for(int i=0; i<n; i++){					//Output
		for(int j=0; j<n; j++){
			cout << mat[i][j] << " ";
		}
		cout << endl;
	}
	
	return 0;
}