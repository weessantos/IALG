#include <iostream>

using namespace std;
int main() {
	
	int n, fat, aux;
	
	cin >> n;
	
	aux = n;
	
	while(n>1){
		
		fat = aux*(n-1);
		aux = fat;
		n--;
	}
	
	cout << fat <<endl;
	
	return 0;
	
}