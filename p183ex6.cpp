#include <iostream>

using namespace std;

int main()
{
	int n;

	cin >> n;
	int pascal[n][n+1];

	pascal[0][0] = 1;
	pascal[0][1] = 0;

	cout << 1 << endl;
	for(int i=1; i<n; i++) {
		pascal[i][0] = 1;
		cout << 1 << " ";
		for(int j=1; j<=i; j++) {
			pascal[i][j] = pascal[i-1][j] + pascal[i-1][j-1];
			cout << pascal[i][j] << " ";
		} cout << endl;
		pascal[i][i+1] = 0;
	}

	return 0;
}
