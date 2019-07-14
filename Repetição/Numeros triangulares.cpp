#include <iostream>

using namespace std;

int main(){
	
	int n=1, total, cont, final;
	
	cin >> final;
	cont = final;
	
	while(cont!=0){
		
		total= n*(n+1)/2;
		cont--;
		n++;
	}
	
	cout << total <<endl;
	
	return 0;
}