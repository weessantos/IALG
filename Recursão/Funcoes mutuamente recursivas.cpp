#include <iostream>
using namespace std;

	int f(int x);
	int h(int x);

	int f(int x){
		return x<1?1:x%2==0? 2*h(x)+f(x-1):2*h(x)-f(x-1);
}
	int h(int x){
		return x<1?0:h(x-1)+f(x-1);
	}
	
	int main(){
		int n;
		cin >> n;
		cout<< f(n) <<endl;
	}
