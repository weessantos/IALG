#include <iostream>

using namespace std;

int main(){
	
	int total, num, winner=0, cont, pos=0;
	
	cin >> total;
	cont = total;
	
	while(cont!=0){
		
		cin >> num;
		pos+=1;
		cont--;
		
		if(pos==num){
			winner = num;	
		}
		
		else if(cont==0 and winner==0){
			cout << 0 <<endl;
		}		
	}
	
	if(winner!=0){
		cout << winner <<endl;
	}
		
	return 0;
}