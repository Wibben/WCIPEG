#include <iostream>

using namespace std;

int main()
{
	int n;
	
	cin >> n;
	bool prime[n+1];
	fill(prime,prime+n+1,1);
	prime[1] = 0;
	
	for(int i=1; i<=n; i++) {
		if(prime[i]==1) 
			for(int j=2*i; j<=n; j+=i)
				prime[j] = 0;
		cout << prime[i] << endl;
	}

	return 0;
}
