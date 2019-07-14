#include <iostream>
using namespace std;

int main()
{
	int n, f1 = 0, f2 = 1, nextf = 0;

	cin >> n;


	for (int i = 1; i <= n; ++i)
	{
		if(i == 1)
		{
			cout << f1;
			continue;
		}
		if(i == 2)
		{
			cout << " " << f2 << " ";
			continue;
		}
		nextf = f1 + f2;
		f1 = f2;
		f2 = nextf;
		
		cout << nextf << " ";
	}
	return 0;
}