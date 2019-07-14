#include <iostream>

using namespace std;
int main() {
	
	int n;
	float r, pg=1;
	
	cin >> r >> n;
	
	while(n>0){
		
		cout << pg <<endl;
		pg*=r;
		n--;
	}
	
	return 0;
	
}