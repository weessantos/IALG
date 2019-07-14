#include <iostream>

using namespace std;
int main() {
	
	int tam, area, line, cont=1;
	
	cin >> tam;    			//Tamanho das linhas e colunas. 
	area = tam*tam;			//Area total do tabuleiro. 
	line = tam;				//Tamanho de uma linha.  
	
	for(int n=1; n<area+1; n++){				//Enquanto N for menor que a area+1 (+1 pois o contador começa em 1 e não em zero)
		
			if(cont%2==0 and line!=0){			//Par é hashtag
				cout << "#";									
				line--;						
				cont++;	
						
			}
		
			else if(cont%2!=0 and line!=0){		//Impar é pontinho
				cout <<".";
				line--;
				cont++;

			}
			else if(line==0){			//Se a linha zerar, ele tem que pular uma linha e repetir o processo todo.
				cout <<endl;
				line+=tam;			//Volta a linha à largura original dela, para que entre nos if's novamente.
				n--;					//Reduz em um o N toda vez que entre nesse if, pelo fato de cada vez que isso acontece, come uma repetição.
			}
		}	
	return 0;
}