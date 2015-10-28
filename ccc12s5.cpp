#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

int main()
{
    int dp[26][26],r,c,cats,catr,catc;

    for(int i=0; i<26; i++)
        for(int j=0; j<26; j++)
            dp[i][j] = 0;

    cin >> r >> c >> cats;
    for(int i=0; i<cats; i++) {
        cin >> catr >> catc;
        dp[catr][catc] = -1;
    }

    dp[1][1] = 1;
    for(int i=1; i<=r; i++) {
        for(int j=1; j<=c; j++) {
            if(dp[i][j]!=-1) {
                if(dp[i][j+1]!=-1 && j+1<=c) dp[i][j+1] += dp[i][j];
                if(dp[i+1][j]!=-1 && i+1<=r) dp[i+1][j] += dp[i][j];
            }
        }
    }

    cout << dp[r][c] << endl;

	return 0;
}
