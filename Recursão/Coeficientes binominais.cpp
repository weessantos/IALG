#include <iostream>
using namespace std;


	int c (int n, int j){
		
		return j==0||j==n?1:c(n-1,j-1) + c(n-1,j);
	
	}
	
	int main (){
		
		int n , j;
		cin >> n >> j;
		cout<< c(n,j) <<endl;
		return 0;
}