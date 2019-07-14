#include <iostream>

using namespace std;
int main() {
	
	int n1, n2, aux;
	
	cin >> n1 >> n2;
	
	aux = n1;
		
	while(n2>0){
		
		cout << n1 <<endl;
		
		n1+=aux;
		n2--;	
		}
	
	return 0;
	
}