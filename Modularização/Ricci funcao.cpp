#include <iostream>

using namespace std;

void ricci(int fib_f, int fib_ant_f, int n_f);

int main() {
	
int n, fib, fib_ant, fib1, fib2;
		
	cin >> fib1 >> fib2;
		
	cin >> n;
		
	fib_ant = fib1;
	fib=fib2;
		
		if(n==1){
			cout << fib1 <<endl;
		}
		if(n>1){
			cout << fib1 <<endl;
			cout << fib2 <<endl;
		}

	ricci(fib, fib_ant, n);
		
	return 0;
}


void ricci(int fib_f, int fib_ant_f, int n_f){
	
	while(n_f>2){
	
		fib_f+= fib_ant_f;  			
		fib_ant_f = fib_f-fib_ant_f;	
		cout << fib_f <<endl;		 		
		n_f--;
	}
}