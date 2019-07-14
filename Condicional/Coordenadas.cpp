#include <iostream>

using namespace std;
int main() {
	
	float largura, altura, x, y;
	
	cin >> largura >> altura >> x >> y;
	
	cout << ((x - (largura/2))/(largura/2))<<endl;
	
	cout << ((y - (altura/2))/(altura/2))<<endl;
	
	return 0;
	
}