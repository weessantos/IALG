#include <iostream>

using namespace std;
int main() {
	

	int mat[3][3], winner=0;
	
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cin >> mat[i][j];
		}
	}
	
	//LINES AND COLUMNS ONE
	
	for(int l=0; l<3; l++){
		if((mat[l][0]==1) and (mat[l][1]==1) and (mat[l][2]==1)){
			winner = 1;
			l = 4;
		}
	}
	
	for(int c=0; c<3; c++){
			if((mat[0][c]==1) and (mat[1][c]==1) and (mat[2][c]==1)){
				winner = 1;
				c = 4;
			}
	}
	
	//LINES AND COLUMNS TWO
	
	for(int l=0; l<3; l++){
			if((mat[l][0]==2) and (mat[l][1]==2) and (mat[l][2]==2)){
				winner = 2;
				l = 4;
			}
		}
		
	for(int c=0; c<3; c++){
			if((mat[0][c]==2) and (mat[1][c]==2) and (mat[2][c]==2)){
				winner = 2;
				c = 4;
			}
	}
	
	//DIAGONAL ONE
	
	if((mat[0][0]==1) and (mat[1][1]==1) and (mat[2][2]==1)){
		winner = 1;
			
	}
	
	else if((mat[3][0]==1) and (mat[1][1]==1) and (mat[0][3]==1)){
		winner =1;
	}
	
	//DIAGONAL TWO
	
	else if((mat[0][0]==2) and (mat[1][1]==2) and (mat[2][2]==2)){
			winner = 2;		
	}
		
	if((mat[3][0]==2) and (mat[1][1]==2) and (mat[0][3]==2)){
			winner =2;
	}
	
	
	cout << winner <<endl;
	
	return 0;

}