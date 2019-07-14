#include <iostream>

using namespace std;
int main() {
	
	float x, y;
	int num;
	
	cin >> x >> y;
	
	if((y*100)%x)==0;{
		
	num = ((y*100)/x);
	cout << num <<endl;
	}
	
	else if ((y*100)%x)!=0;{
	num = ((y*100)/x)+1;
	cout << num <<endl;
	}
	
	return 0;
	
}