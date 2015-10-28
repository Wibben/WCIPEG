#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int value[20001];
	int m,n,val;

	cin >> m >> n; n--;
	for(int i=0; i<m; i++) {
		for(int j=0; j<n; j++) {
		    if(i==0) value[j] = -100;
			cin >> val;
			value[j] = max(value[j],val);
		}
	}

	int maxSum=0;
	for(int i=0; i<n; i++) {
		int sum=0;
		for(int j=i; j<n; j++) {
			sum+=value[j];
			maxSum = max(sum,maxSum);
		}
	}

	cout << maxSum << endl;

	return 0;
}
