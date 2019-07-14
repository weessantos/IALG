#include <iostream>
using namespace std;

	
	void f(int n,int q){
		 cin>>n;
		 if(--q) f(n,q);
		 cout<<n<<" ";
		 }
	
	int main(){
		 int q;
		 cin>>q;
		 f(0,q);
				  
		 
		 return 0;
	}
