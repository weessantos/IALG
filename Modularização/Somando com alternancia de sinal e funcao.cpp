#include <iostream>

using namespace std;

int somatorio(int qnt_f, int cont, int soma_f, int sub_f, int aux_f, int total_f, int cont1_f, int cont2_f, int cont3_f)	;

int main() {
	
	int qnt, cont=1, soma, sub, aux=sub, total=0, cont1=0, cont2=0, cont3=0;
	
	cin >> qnt;
	
	while (qnt<=0){
		cin >> qnt;
	}
	
	total = somatorio(qnt, cont, soma, sub, aux, total, cont1, cont2, cont3);
	
	cout << total <<endl;
	
	return 0;
}
	
int somatorio(int qnt_f, int cont_f, int soma_f, int sub_f, int aux_f, int total_f, int cont1_f, int cont2_f, int cont3_f){
	
	while(cont_f<=qnt_f){
		
		
		if((cont_f==1)or(cont_f==cont1_f+1)){								//NORMAL
			if(cont_f%2==0){
				total_f= total_f - cont_f;
				cont_f++;
				cont1_f++;
				cont2_f++;
				cont3_f++;
			}
			else if (cont_f%2!=0){
				total_f = total_f + cont_f;
				cont_f++;
				cont1_f++;
				cont2_f++;
				cont3_f++;
			}
			
	
		}
		
		if((cont_f==2 and cont_f<=qnt_f)or(cont_f==cont2_f+1 and cont_f<=qnt_f)){			//ELEVADO AO QUADRADO
			if(cont_f%2==0){
				total_f= total_f - (cont_f*cont_f);
				cont_f++;
				cont1_f++;
				cont2_f++;
				cont3_f++;
			}
			else if (cont_f%2!=0){
				total_f = total_f+(cont_f*cont_f);
				cont_f++;
				cont1_f++;
				cont2_f++;
				cont3_f++;
			}
		}
		
		if((cont_f==3 and cont_f <=qnt_f)or(cont_f==cont3_f+1 and cont_f<=qnt_f)){			//ELEVADO AO CUBO
			if(cont_f%2==0){
				total_f= total_f - (cont_f*cont_f*cont_f);
				cont_f++;
				cont1_f++;
				cont2_f++;
				cont3_f++;

			}
			else if (cont_f%2!=0){
				total_f = total_f+(cont_f*cont_f*cont_f);
				cont_f++;
				cont1_f++;
				cont2_f++;
				cont3_f++;

			}
		}
	}	
		
		return total_f;

}