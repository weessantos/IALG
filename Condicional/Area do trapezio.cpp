#include <iostream>

using namespace std;

int main(){
	
	int total, num, reward, cont;
	
	cin >> total;
	cont = total;
	
	while(cont!=0){
		cin >> num;
		
		if(total==num){
			cout << num <<endl;
		}
		
		else if(cont==0){
			cout << 0 <<endl;
		}
		
		cont--;
	}
		
	return 0;
}