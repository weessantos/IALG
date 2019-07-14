#include <iostream>
#include <cstring>

using namespace std;

typedef struct
{
	int entrada[7];
	int saida[7];
	char gnome[100];
} Santa;

int main(){
	int qnt;

	cin >> qnt;

	Santa g[qnt];

	for (int i = 0; i < qnt; i++){
		cin >> g[i].gnome;

		for(int j = 0; j < 7; j++)
			cin >> g[i].entrada[j] >> g[i].saida[j];
	}

	for(int i = 0;i<qnt;i++){
		int soma = 0;
		for(int j = 0;j<7;j++)
			soma+=(g[i].saida[j] - g[i].entrada[j]);
		if(soma < 70)
			cout << g[i].gnome << " " << soma << endl;
	}

	return 0;
}