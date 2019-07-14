#include <iostream>

using namespace std;
int main() {
	
	int x, y;
	float m1, m2, total=0.0;
	
	cin >> x >> y;
	
	float mat[x][y];	
	
	for(int i=0; i<x; i++){
		for(int j=0; j<y; j++){
			cin >> mat[i][j];
		}
	}
	
	cin >> m1 >> m2;
		
		
	//MOD ZERO *M1
	for(int m=0; m<x; m++){
		if(m%2==0){
			for(int n=0; n<y; n++){
				mat[m][n]*= m1;
			}
		}
	}
	
	//MOD ONE *M2
	for(int c=0; c<y; c++){
		if(c%2!=0){
			for(int l=0; l<x; l++){
				mat[l][c]*= m2;
			}
		}
	}
	
	//TOTAL
	for(int sl=0; sl<x; sl++){
		for(int sc=0; sc<y; sc++){
			total+=mat[sl][sc];
		}
	}
	
		
	cout << total <<endl;
		
		
		return 0;
}