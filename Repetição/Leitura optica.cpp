#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int num, q1, q2, q3, q4, q5;
	
	cin >> num;
	
	while(num!=0){
		int cont = num;
		
			while(cont>0){
				cin >> q1 >> q2 >> q3 >> q4 >> q5;
				
				if((q1 <= 127) and (q2 > 127) and (q3 > 127) and (q4 > 127) and (q5 > 127)){
					cout << "A" <<endl;
				}
				
				else if((q1 > 127) and (q2 <= 127) and (q3 > 127) and (q4 > 127) and (q5 > 127)){
					cout << "B" <<endl;
				}
				
				else if((q1 > 127) and (q2 > 127) and (q3 <= 127) and (q4 > 127) and (q5 > 127)){
					cout << "C" <<endl;
				}
				
				else if((q1 > 127) and (q2 > 127) and (q3 > 127) and (q4 <= 127) and (q5 > 127)){
					cout << "D" <<endl;
				}
				
				else if((q1 > 127) and (q2 > 127) and (q3 > 127) and (q4 > 127) and (q5 <= 127)){
					cout << "E" <<endl;
				}
				
				else{
					cout << "*" <<endl;
				}
				cont--;
			}
			
			cin >> num;
		}
				
	
	return 0;
}
