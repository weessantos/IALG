#include <stdio.h>

int mdc(int a, int b){

	int q = 0;
	int r = 0;
	
	do {

		q = b / a;
		r = b % a;
		printf("%d = %d * %d + %d \n", b, q, a, r);

		b = a;      
		if (r) a = r;
		
	} while (r != 0);
	
	return a;

}

int main() {

	int a = 0;
	int b = 0;   
	
	scanf("%d %d", &a, &b);
	
	printf("mdc(%d,%d) = %d\n", a, b, mdc(a,b));
	
	return 0;

}