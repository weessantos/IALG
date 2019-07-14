#include <iostream>
using namespace std;

	double khi(double p){
		 return p==1?1:1+(1/(khi(p-1)));
	}
	int main(){
		 double n;
		 cin>>n;
		 cout<<khi(n)<<endl;
		 return 0;
	}
