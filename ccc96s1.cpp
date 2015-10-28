#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int nums,n;

	cin >> nums;
	for(int i=0; i<nums; i++) {
		int sum = 0;
		cin >> n;
		for(int j=2; j<=sqrt(n); j++) {
			if(n%j==0) {
				sum = sum + j + ((n/j)==j ? 0:n/j);
			}
		}
		sum++;
		if(sum<n) cout << n << " is a deficient number.\n";
		else if(sum==n) cout << n << " is a perfect number.\n";
		else if(sum>n) cout << n << " is an abundant number.\n";
	}

	return 0;
}
