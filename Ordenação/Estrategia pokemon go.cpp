#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

typedef struct
{
	char pokemons[100];
	char type[100];
	int range;
	
}Pokemon;

typedef struct
{
	char pokemons[100];
	int range;
	
}Catch;

int main() {
	
	int qnt;	
	cin >>qnt;
	char poke[100];
	
	Pokemon p[qnt];
	Catch c[qnt];
	
	for(int i=0; i<qnt; i++){
		cin >> p[i].pokemons >> p[i].type >> p[i].range;
	}
	
	char chose[100];
	int chose_qnt;
	
	cin >> chose >> chose_qnt;
	
	int aux = chose_qnt;
		
		int pos =0;
		for(int i=0; i<qnt; i++){
			if(strcmp(p[i].type, chose)==0){
					strcpy(c[pos].pokemons, p[i].pokemons);
					c[pos].range = p[i].range;
					pos++;
			}
		}
		
		
		for( int i = 1; i < pos ; i++ ) {
				for( int j = i; j > 0; j-- ) {
					if( c[j].range < c[j-1].range )
				swap(c[j].range, c[j-1].range);
				swap(c[j].pokemons, c[j-1].pokemons);
			}
		}
		
			
	ofstream arquivoOut;										//OPEN TXT
				
		arquivoOut.open("pokemon.txt");				
		
		for(int i=0; i<chose_qnt; i++){
			arquivoOut << c[i].pokemons <<endl;
		}
			
	arquivoOut.close();
	
	return 0;
}
		