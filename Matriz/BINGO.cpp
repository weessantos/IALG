#include <iostream>

using namespace std;
int main() {
	
	int l=0, c=0, cont=0;
	bool bingo = false;
	
	int mat[5][5];
	

	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			cin >> mat[i][j];
			}
		}
			
	//BINGO DIAGONAL
		if((mat[0][0]==1)and(mat[1][1]==1)and(mat[2][2]==1)and(mat[3][3]==1)and(mat[4][4]==1)){
			cont=3;
			bingo = true;
		}
		
	//BINGO SECONDARY DIAGONAL
			if((mat[0][4]==1)and(mat[1][3]==1)and(mat[2][2]==1)and(mat[3][1]==1)and(mat[4][0]==1)){
				cont=4;
				bingo = true;
		}
	
	//BINGO LINE
	while((l<5) and (bingo==false)){
		if((mat[l][c]==1)and(mat[l][c+1]==1) and (mat[l][c+2]==1) and (mat[l][c+3]==1) and (mat[l][c+4]==1)){
			cont=1;
			l=100;
			bingo = true;
		}			
		
		else{
			l++;
				
		}
	}
	
	l=0;
	
		
	//BINGO COLUMN
	while((c<5) and (bingo==false)){
			if((mat[l][c]==1) and (mat[l+1][c]==1) and (mat[l+2][c]==1) and (mat[l+3][c]==1) and (mat[l+4][c]==1)){
				cont=2;
				c=100;
				bingo = true;
			}
			
			else{			
				c++;
								
			}
	}	
	
		
	if(cont==1){
		cout << cont <<endl;
	}
	
	else if(cont==2){
			cout << cont <<endl;
	}
	
	else if(cont==3){
			cout << cont <<endl;
	}
		
	else if(cont==4){
			cout << cont <<endl;
	}
	
	else if(cont==0){
			cout << -1 << endl;
	}	


	return 0;	
}

