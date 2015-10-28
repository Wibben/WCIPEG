#include <iostream>

using namespace std;

int main()
{
	int dp[5001],a[5001];
	int n,ans=0;

	dp[0] = 0;
	cin >> n;
	for(int i=1; i<=n; i++) {
		cin >> a[i];
		dp[i] = 1;
		for(int j=0; j<i; j++)
			if(a[j]<a[i])
                dp[i] = max(dp[i],dp[j]+1);
		ans = max(ans,dp[i]);
	}

	cout << ans << endl;

	return 0;
}
