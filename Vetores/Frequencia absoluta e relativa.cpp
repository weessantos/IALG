#include <iostream>

using namespace std;

int main() {
	
	int n=80;
	float n0=0, n1=0, n2=0, n3=0, n4=0, n5=0, n6=0, n7=0, n8=0, n9=0, n10=0;
	int notas[n];
	
	
	for(int i=0; i<n; i++){
		cin >> notas[i];
	}
	
	
	for(int j=0; j<n; j++){
		if(notas[j] == 0){
			n0++;
		}
		if(notas[j] == 1){
			n1++;
		}
		if(notas[j] == 2){
			n2++;
		}
		if(notas[j] == 3){
			n3++;
		}
		if(notas[j] == 4){
			n4++;
		}
		if(notas[j] == 5){
			n5++;
		}
		if(notas[j] == 6){
			n6++;
		}
		if(notas[j] == 7){
			n7++;
		}
		if(notas[j] == 8){
			n8++;
		}
		if(notas[j] == 9){
			n9++;
		}
		if(notas[j] == 10){
			n10++;
		}
		
	}
		cout << "0" << " " << n0 << " "<< n0/10 <<endl;
		cout << "1" << " " << n1 << " " << n1/10 <<endl;
		cout << "2" << " " << n2 << " "<< n2/10 <<endl;
		cout << "3" << " " << n3 << " "<< n3/10 <<endl;
		cout << "4" << " " << n4 << " "<< n4/10 <<endl;
		cout << "5" << " " << n5 << " "<< n5/10 <<endl;
		cout << "6" << " " << n6 << " "<< n6/10 <<endl;
		cout << "7" << " " << n7 << " "<< n7/10 <<endl;
		cout << "8" << " " << n8 << " "<< n8/10 <<endl;
		cout << "9" << " " << n9 << " "<< n9/10 <<endl;
		cout << "10" << " " << n10 << " "<< n10/10 <<endl;

	
return 0;

}