#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	vector<int> primes;

	primes.push_back(2);

	cin >> n;
	for(int i=3; primes.size()<n; i+=2) {
		bool isprime = true;

		for(int j=0; j<primes.size() && isprime; j++)
			if(i%primes[j]==0) isprime = false;

		if(isprime) primes.push_back(i);
	}

	for(int i=0; i<n; i++) {
		cout << primes[i] << " ";
		if((i+1)%10==0) cout << endl;
	}

	return 0;
}
