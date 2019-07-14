#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;

struct Aluno {
	int matricula;
	int nota;
};

void readFile (Aluno alunos[], int tam) {
	ifstream arquivo("notas.txt");
	if (arquivo) {
		for (int i = 0; i < tam; i++)
		{
			arquivo >> alunos[i].matricula;
			arquivo >> alunos[i].nota;
		}
	}
	arquivo.close();
}

void normalizar(Aluno alunos[], int tam) {
	int maiorNota = alunos[0].nota;
	for (int i = 1; i < tam; i++)
	{
		if(alunos[i].nota > maiorNota) {
			maiorNota = alunos[i].nota;
		}
	}
	
	for (int i = 0; i < tam; i++)
	{
		double novaNota = alunos[i].nota*100;
		alunos[i].nota = round(novaNota/maiorNota);
	}
}

void saveFile(Aluno alunos[], int tam) {
	ofstream arquivo("notas.txt");
	for (int i = 0; i < tam; i++)
	{
		arquivo << alunos[i].matricula << " " << alunos[i].nota << endl;
	}
	arquivo.close();
}
	
int main() {
	
	ifstream arquivo("notas.txt");
	int dados;
	int tam = 0;
	while (arquivo >> dados) {
		tam++;
	}
	tam/=2;
	
	Aluno alunos[tam];
	readFile(alunos, tam);
	normalizar(alunos, tam);
	saveFile(alunos, tam);
	
	return 0;
}
