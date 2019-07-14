#include <iostream>

using namespace std;
int main() {
	
	int reward;
	float extra_hours, missed_hours, hours;
	
	cin >> extra_hours >> missed_hours;
	
	hours = extra_hours - (2/3*(missed_hours));
	hours = hours*60;
	
	if (hours > 2400){
		reward = 500;
		cout << reward <<endl;
	}
	
	else if (hours > 1800 and hours <= 2400){
		reward = 400;
		cout << reward <<endl;
	}
	
	else if (hours > 1200 and hours <=1800){
		reward = 300;
		cout << reward <<endl;
	}
	
	else if (hours > 600 and hours <=1200){
		reward = 200;
		cout << reward <<endl;
	}
	
	else {
		cout << 100 << endl;
	}
	
	return 0;
}

//H(Minutos)					Prêmio(R$)
//Maior que 2400					500
//Entre 1800 e 2400 (incluso)		400
//Entre 1200 e 1800 (incluso)		300
//Entre 600 e 1200 (incluso)		200
//Menor igual a 600					100