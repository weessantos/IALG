
#include <iostream>
using namespace std;
int main(int argc, char *argv[]) {
	
	int bedrooms;

	cin >> bedrooms;


	int i = 1;
	while (i <= bedrooms){
		int cont = 0;

		int j = i;
		while (j >= 1){
			if (i % j == 0){
				cont++;
			}
			j--;
		}

		if (cont % 2 != 0){
			cout << i << " ";
		}
		i++;
	}

	return 0;
}