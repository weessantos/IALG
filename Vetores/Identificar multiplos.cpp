#include <iostream>

using namespace std;
int main() {
	
	int num[15];
	int vector_out[15]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};				//Zero values because trash variables
	int reverse[15];
	int i=0, j=0, o=0;
		
	while(i<15){
		cin >> num[i];
		if(num[i]==(-1)){										//Input vector values, after insert -1 value, stop input
			i=15;
		}
		i++;
		
	}
	
	for(int k=1; k<15; k++){
		if((num[k]%num[0]==0) and (num[k]!=0)){					//Store mods0 values
			
			vector_out[o]=num[k];
			o++;
		}
	}
	
	for (int m=0; m < 15; m++) {
		reverse[m] = vector_out[14 - m];					//Vector inverse
	}
	
	for(int p=0; p<15; p++){
		if(reverse[p]!=0){
		cout << reverse[p]<< " ";							//Output without zero
		}
	}

	return 0;
}


// INPUT 2 9 4 7 6 3 0 1 35 11 8 13 14 -1 
// OUTPUT 14 8 6 4