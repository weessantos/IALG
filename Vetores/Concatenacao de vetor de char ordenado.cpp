#include <iostream>
#include <string.h>

using namespace std;

int main()
{
		
int x, y, z, c=0;

		cin >> x >> y;
		
		z = x+y;
		
		char letters[x];
		char letters2[y];
		char letters_out[z];
		int a = 0;
		
		while (a < x){						//First vector input
				
				cin >> letters[a];
				a++;
		}

	
		int b = 0;
		
		while (b < y){						//Second vector input
				
				cin >> letters2[b];
				b++;
		}
		
		memcpy( letters_out, letters, sizeof(letters) );			//Copy in out vector the first vector, in first half of vector out
		memcpy( letters_out + x, letters2, sizeof(letters2) );	//Copy in out vector the second vector, in second half of vector out		
		
		for (int j = 0; j < z-1; j++){
			
			for (int i = 0; i < z-1; i++){
				
				if (letters_out[i] > letters_out[i+1]){
					
					int temp = letters_out[i];
					letters_out[i] = letters_out[i+1];
					letters_out[i+1] = temp;
				}
			}
		}
cout << "\n";

for (int k = 0; k < z; k++){					//Final vector output
	
		cout << letters_out[k] << endl;
}
		return 0;
}