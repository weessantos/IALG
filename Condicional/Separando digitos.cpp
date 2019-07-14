#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
int main() {
	
	int n, num, num1, num2, num3, num4, num5, digitos=0;
	
	cin >> n;
	num = n;
	
	while(n>=1){
		n = n/10;
		
		digitos++;
	}
	
	if(digitos == 5){
		
		num1 = num/10000;
		num2 = num/1000;
		num2 = num2%10;
		num3 = num/100;
		num3 = num3%100;
		num3 = num3%10;
		num4 = num/10;
		num4 = num4%1000;
		num4 = num4%100;
		num4 = num4%10;
		num5 = num%10000;
		num5 = num5%1000;
		num5 = num5%100;
		num5 = num5%10;
		
		cout << num1 << "..." << num2 << "..." << num3 << "..." << num4 << "..." << num5 <<endl;
	
	}
	
	if(digitos == 4){
		
		num2 = num/1000;
		num2 = num2%10;
		num3 = num/100;
		num3 = num3%100;
		num3 = num3%10;
		num4 = num/10;
		num4 = num4%1000;
		num4 = num4%100;
		num4 = num4%10;
		num5 = num%10000;
		num5 = num5%1000;
		num5 = num5%100;
		num5 = num5%10;
		
		cout << '0' << "..." << num2 << "..." << num3 << "..." << num4 << "..." << num5 <<endl;
	}
	
	if( digitos == 3){
		
		num3 = num/100;
		num3 = num3%100;
		num3 = num3%10;
		num4 = num/10;
		num4 = num4%1000;
		num4 = num4%100;
		num4 = num4%10;
		num5 = num%10000;
		num5 = num5%1000;
		num5 = num5%100;
		num5 = num5%10;

		cout << '0' << "..." << '0' << "..." << num3 << "..." << num4 << "..." << num5 <<endl;	
	}
	
	if (digitos == 2){
		
		num4 = num/10;
		num4 = num4%1000;
		num4 = num4%100;
		num4 = num4%10;
		num5 = num%10000;
		num5 = num5%1000;
		num5 = num5%100;
		num5 = num5%10;
		
		cout << '0' << "..." << '0' << "..." << '0' << "..." << num4 << "..." << num5 <<endl;
	}
	
	if (digitos == 1){
		
		cout << '0' << "..." << '0' << "..." << '0' << "..." << '0' << "..." << n <<endl;
	}
	
	if(digitos > 5){
	
		cout << "invalido" <<endl;
	}
	
	return 0;
		
}