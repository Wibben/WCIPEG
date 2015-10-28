#include <iostream>

using namespace std;

bool prime(int n) 
{
	for(int i=2; i<=n/2+1; i++)
		if(n%i==0) return 0;
	return 1;
}

int main()
{
	int t,n;
	
	cin >> t;
	while(t--) {
		cin >> n;
		cout << prime(n) << endl;
	}

	return 0;
}
