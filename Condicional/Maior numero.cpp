#include <iostream>

using namespace std;
int main() {
	
	float n1, n2, n3;
	
	cin >> n1 >> n2 >> n3;
	
	if (n1 > n2 and n1 > n3){
	
		cout << n1 <<endl;
	}
	
		else if (n2 > n1 and n2 > n3){
		
			cout << n2 <<endl;
		}
		
			else if (n3 > n1 and n3 > n2){
			
				cout << n3 <<endl;
			}
}