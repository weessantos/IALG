#include <iostream>

using namespace std;
int main() {
	
	int n, divn=1, total=0;
	
	cin >> n;
	
	while(divn< n){
		
		if(n%divn==0){
			cout << divn<<"+";
			total = total+divn;
			divn++;
		}
		else{
			divn++;
		}

	}
		
	cout << n <<"=" << total+n;
	
	return 0;
}