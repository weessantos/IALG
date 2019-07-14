#include <iostream>

using namespace std;
int main() {
	
	int present_day, present_hour, present_min, day, hour, min, remaining;

	
	cin >> present_day >> present_hour >> present_min >> remaining;
	
	if(remaining!=0){
		
		hour = remaining/60;
		min = remaining%60 + present_min;				//Calculo dos minutos.
		
		if (min > 59){
			hour++;
			min = min - 60;
		}
	}
	
	if(present_hour < 24){
		
		hour=present_hour+hour;
	}	
			if(hour >= 24 and hour < 48){					//Calculo para 1 dia.
			
			day++;
			hour = hour - 24;
			}
		
				else if(hour >= 48 and hour < 72){			//Calculo para 2 dias.
			
				day = day+2;
				hour = hour - 48;
				}	
				
				else if(hour >= 72){					//Calculo para 3 dias.
			
				day = day+3;
				hour = hour - 72;
				}	
			
		cout << present_day + day << " " << hour << " " << min;
		
	return 0;	
}
	

//O dia do horário atual (inteiro),
//a hora do horário atual (inteiro entre 0 e 23),
//o minuto do horário atual (inteiro entre 0 e 59),
//a duração em minutos que a atualização precisa para terminar (inteiro).

//3
//20
//12 
//1911

