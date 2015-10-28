#include <iostream>

using namespace std;

int main()
{
	int n;
	
	int primes[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
	
	cin >> n;
	
	for(int i=0; i<n; i++)
		cout << primes[i] << endl;
	
	return 0;
}
