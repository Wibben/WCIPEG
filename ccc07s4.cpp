#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int a,b,n;
	int dp[10000];
	vector<int> link[10000];

	cin >> n;
	for(int i=0; i<=n; i++)
		dp[i] = 0;

	cin >> a >> b;
	while(a!=0) {
        link[a].push_back(b);
		cin >> a >> b;
	}

    dp[1] = 1; dp[n] = 0;
	for(int i=1; i<n; i++) {
		for(int j=0; j<link[i].size(); j++) {
			dp[link[i][j]] += dp[i];
		}
	}

	cout << dp[n];

	return 0;
}
