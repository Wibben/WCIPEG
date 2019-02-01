#include <iostream>

using namespace std;

int main()
{
	int n,m,d,q;
	int sum[1001],dp[100001];

	cin >> n >> m;
	sum[0] = dp[0] = 0;
	for(int i=1; i<=n; i++) {
		cin >> d;
		sum[i] = sum[i-1]+d;
	}

	for(int i=1; i<=100001; i++)
        for(int j=dp[i-1]; j<=n && i+sum[j]>=0; j++)
            dp[i] = j;

	while(m--) {
		cin >> q;
		cout << dp[q] << endl;
	}

	return 0;
}
