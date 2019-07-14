#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main() {
	
	char word[100];
	char aux[100];
	int i, j, n=0, repeat;

	cin >> word;

	for(i=0; i<100; i++){
		
		for(j=0; j<100; j++){
			
			if(j==i){						//Jump if compare same position
				j++;
			}
			if(word[i]==word[j]){			//Repeat chars
			repeat++;
			j=100;
			}
		}
		
			if(repeat==0){				//Copy unique char
				aux[n] = word[i];
				n++;
			}
			repeat = 0;
		
	}
		
	cout << aux[0] <<endl;				//Output first char that no repeat
	
		return 0;
}
