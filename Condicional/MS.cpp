#include <iostream>

using namespace std;
int main() {
	
	int hr=0, min=0, resto_hr, resto_min, ms;
	float seg=0.0, resto_seg;
	
	cin >> ms;
	resto_hr = ms;	
												
	if(ms>=3600000){
		hr = ms/3600000;
		resto_hr = ms%3600000;
		cout << resto_hr <<endl;
	}
		
		if(resto_hr!=0){
			min = resto_hr/60000;
			resto_min = resto_hr%60000;
		}
	
		if(resto_min!=0){
			seg = resto_min/1000;
		}

	cout << hr << " : " << min << " : ";
	std::cout.precision(1);
	std::cout << std::fixed << seg <<endl;
	
	return 0;
}
