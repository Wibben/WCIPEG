#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	int n,x,sum=0;

	cin >> n;
	for(int i=0; i<n; i++) {
		cin >> x;
		sum += abs(x);
	}

	cout << sum << endl;

	return 0;
}
