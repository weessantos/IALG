#include <iostream>

using namespace std;
int main() {
	
	int year1, year2, month1, month2, day1, day2;
	
	cin >> day1 >> month1 >> year1 >> day2 >> month2 >> year2;
	
	if(year1 > year2){
		
		cout << day1 << " " << month1 << " " << year1 <<endl;
	}
	
	else if(year2 > year1){
			
			cout << day2 << " " << month2 << " " << year2 <<endl;
	}
	
			else if(year1 == year2 and month1 > month2){
				
				cout << day1 << " " << month1 << " " << year1 <<endl;
			}
			
			else if(year1 == year2 and month2 > month1){
						
						cout << day2 << " " << month2 << " " << year2 <<endl;
			}
					
					else if(year1 == year2 and month2 == month1 and day1 > day2){
								
								cout << day1 << " " << month1 << " " << year1 <<endl;
					}
					
					else if(year1 == year2 and month2 == month1 and day2 > day1){
								
								cout << day2 << " " << month2 << " " << year2 <<endl;
					}
return 0;	
}


//Número inteiro representando o dia da primeira data.
//Número inteiro representando o mês da primeira data.
//Número inteiro representando o ano da primeira data.
//Número inteiro representando o dia da segunda data.
//Número inteiro representando o mês da segunda data.
//Número inteiro representando o ano da segunda data.