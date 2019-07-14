#include <iostream>

using namespace std;
int main() {
	
	int salary, boost, new_salary;
	
	cin >> salary;
	
	if(salary <= 300){
		
		boost = salary*0.15;
		new_salary = salary + boost;
		
		cout << boost <<endl;
		cout << new_salary <<endl;
	}
	
		else if(salary > 300 and salary <= 600){
			
			boost = salary*0.10;
			new_salary = salary + boost;
			
			cout << boost <<endl;
			cout << new_salary <<endl;
		}
		
			else if(salary > 600 and salary <= 900){
				
				boost = salary*0.05;
				new_salary = salary + boost;
				
				cout << boost <<endl;
				cout << new_salary <<endl;
				}
			
					else{
				
					cout << 0 <<endl;
					cout << salary <<endl;
					}	
	return 0;
	
}

//Até R$ 300,00	15%
//Entre R$ 300,00 e R$ 600,00 (incluso)	10%
//Entre R$ 600,00 e R$ 900,00 (incluso)	5%
//Acima de R$ 900,00	0%