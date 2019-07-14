#include <iostream>

using namespace std;
int main() {
	
	int n, fib=1, fib_ant=0;
	
	cin >> n;
	
	if(n==1){
		cout << '0'<<endl;
	}
	if(n>1){
		cout << '0' <<endl;
		cout << '1' <<endl;
	}
			
	while(n>2){
		
		fib+= fib_ant;  			
		fib_ant = fib-fib_ant;	
		cout << fib <<endl;		 		
		n--;
		
	}
	return 0;
}