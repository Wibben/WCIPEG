#include <iostream>

using namespace std;

int main()
{
	int n,sum=0;
	
	cin >> n;
	
	for(int i=0; i<=n; i++)
		for(int j=i; j<=n; j++)
			sum+=i+j;
			
	cout << sum << endl;
	
	return 0;
}
