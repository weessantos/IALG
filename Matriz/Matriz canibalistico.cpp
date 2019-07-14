#include <iostream>

using namespace std;
int main() {
	
	//int l=0, c=0, cont=0, bigger=0;
	int bigger=0, bigger_line, smaller=100000, smaller_line , smaller_column;
	bool stop=false;
	
		int mat[10][10];
		

		for(int i=0; i<10; i++){
			for(int j=0; j<10; j++){
				cin >> mat[i][j];
				}
			}
			
		for(int k=0; k<10; k++){
			for(int l=0; l<10; l++){
				if(bigger<mat[k][l]){
					bigger = mat[k][l];
					bigger_line = k;
				}
			}
		}
		
		while(stop==false){
			for(int m=0; m<10; m++){
				if(smaller>mat[bigger_line][m]){
					smaller = mat[bigger_line][m];
					smaller_line = bigger_line;
					smaller_column = m;
					stop = true;
				}
			}
			
		}
		
		cout << smaller <<endl;
		cout << smaller_line << " ";
		cout << smaller_column <<endl;
	
			
	return 0;
	
}