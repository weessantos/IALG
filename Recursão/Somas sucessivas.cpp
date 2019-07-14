#include <iostream>
using namespace std;

	int soma=0;
	int f(int n, int o){
		 return o>0?(soma+=n,f(n,--o)):soma;
	}
	int main(){
		 int n,o;
		 cin>>n>>o;
		 cout<<f(n,o)<<endl;
		 return 0;
	}