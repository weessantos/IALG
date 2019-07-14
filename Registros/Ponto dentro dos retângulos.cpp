#include <iostream>

using namespace std;

typedef struct
{
	int x;
	int y;
} Ponto;

typedef struct
{
	Ponto v1;
	Ponto v2;
} Retangulo;

int main(){

	int px,py;
	cin >> px >> py;
	int n;
	cin >> n;

	Retangulo retangulo[n];

	for (int i = 0; i < n; ++i){
		cin >> retangulo[i].v1.x;
		cin >> retangulo[i].v1.y;
		cin >> retangulo[i].v2.x;
		cin >> retangulo[i].v2.y;
	}

	int c=0;

	for (int i = 0; i < n; ++i){
		int eb[2] = {retangulo[i].v1.x,retangulo[i].v1.y};
		int ea[2] = {retangulo[i].v1.x,retangulo[i].v2.y};
		int db[2] = {retangulo[i].v2.x,retangulo[i].v1.y};
		int da[2] = {retangulo[i].v2.x,retangulo[i].v2.y};
		if (eb[0] <= px && eb[1] <= py && ea[0] <= px && ea[1] >= py && db[0] >= px && db[1] <= py && da[0] >= px && da[1] >= py)
				c++;
	}
	cout << c << endl;
	return 0;
}