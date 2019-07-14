#include <iostream>

using namespace std;

void mesdoano(int month);

int main() {
	
	int mes, result;
	
	cin >> mes;
	
	mesdoano(mes);
	
	return 0;
}

void mesdoano(int month){
		
		if(month==1){
			cout << "janeiro" <<endl;
		}
		if(month==2){
			cout << "fevereiro" <<endl;
		}
		if(month==3){
			cout << "marco" <<endl;
		}
		if(month==4){
			cout << "abril" <<endl;
		}
		if(month==5){
			cout << "maio" <<endl;
		}
		if(month==6){
			cout << "junho" <<endl;
		}
		if(month==7){
			cout << "julho" <<endl;
		}
		if(month==8){
			cout << "agosto" <<endl;
		}
		if(month==9){
			cout << "setembro" <<endl;
		}
		if(month==10){
			cout << "outubro" <<endl;
		}
		if(month==11){
			cout << "novembro" <<endl;
		}
		if(month==12){
			cout << "dezembro" <<endl;
		}
		if(month>12){
			cout << "erro" <<endl;
		}
}