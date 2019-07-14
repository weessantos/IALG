#include <iostream>

using namespace std;

int reverse(int num, int remainder, int reversedNumber);

int main() {
	
	int n, nr;
		
	cin >> n;
	
	nr = reverse(n, 0, 0);
	
	if(nr==n)
		cout << "sim" <<endl;
	
	else
		cout << "nao" <<endl;	

return 0;
}

int reverse(int num, int remainder, int reversedNumber){

	while(num != 0){
		
		remainder = num%10;
		reversedNumber = reversedNumber*10 + remainder;
		num /= 10;
	}
	
	return reversedNumber;
}



