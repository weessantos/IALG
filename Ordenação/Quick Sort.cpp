#include <iostream>

using namespace std;

void quickSort(int vet[], int esq, int dir){
	int pivo = esq, i,ch,j;         
	for(i=esq+1;i<=dir;i++){        
		j = i;                      
		if(vet[j] < vet[pivo]){     
			ch = vet[j];               
			while(j > pivo){           
				vet[j] = vet[j-1];      
				j--;                    
			}
			vet[j] = ch;               
			pivo++;                    
		}
	}
	if(pivo-1 >= esq){              
		quickSort(vet,esq,pivo-1);      
	}
	if(pivo+1 <= dir){              
		quickSort(vet,pivo+1,dir);      
	}
 }

int main(int argc, char *argv[]) {
	
	int n;
		cin >> n;
		
		int vet[n];
		
		for(int i=0; i<n; i++){
			cin >> vet[i];
		}

		quickSort(vet, 0, n-1);
		
		for(int i=0; i<n; i++){
			cout << vet[i] << " ";
		}

	
	
	return 0;
}