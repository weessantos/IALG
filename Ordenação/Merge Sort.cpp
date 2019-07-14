#include <iostream>

using namespace std;

void mergeSort(int *vetor, int posicaoInicio, int posicaoFim) {
	int i, j, k, metadeTamanho, *vetorTemp;
	if(posicaoInicio == posicaoFim) return;
	metadeTamanho = (posicaoInicio + posicaoFim ) / 2;

	mergeSort(vetor, posicaoInicio, metadeTamanho);
	mergeSort(vetor, metadeTamanho + 1, posicaoFim);

	i = posicaoInicio;
	j = metadeTamanho + 1;
	k = 0;
	vetorTemp = (int *) malloc(sizeof(int) * (posicaoFim - posicaoInicio + 1));

	while(i < metadeTamanho + 1 || j  < posicaoFim + 1) {
		if (i == metadeTamanho + 1 ) { 
			vetorTemp[k] = vetor[j];
			j++;
			k++;
		}
		else {
			if (j == posicaoFim + 1) {
				vetorTemp[k] = vetor[i];
				i++;
				k++;
			}
			else {
				if (vetor[i] < vetor[j]) {
					vetorTemp[k] = vetor[i];
					i++;
					k++;
				}
				else {
					vetorTemp[k] = vetor[j];
					j++;
					k++;
				}
			}
		}

	}
	for(i = posicaoInicio; i <= posicaoFim; i++) {
		vetor[i] = vetorTemp[i - posicaoInicio];
	}
	free(vetorTemp);
}

int main(int argc, char *argv[]) {
	
	int n;
	cin >> n;
	
	int vet[n];
	
	for(int i=0; i<n; i++){
		cin >> vet[i];
	}

	mergeSort(vet, 0, n-1);
	
	for(int i=0; i<n; i++){
		cout << vet[i] << " ";
	}
	
	
	return 0;
}