#include <iostream>

using namespace std;
int main() {
	
	int investment;
	float value, after;
	
	cin >> investment >> value;
	
	if(investment==1){
		
		after = ((value*0.005)+value);
		
		cout << after <<endl;
	}
	
	else if(investment==2){
		
		after = ((value*0.03)+value-30);
		
		cout << after <<endl;
	}
	
	return 0;
}