#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	double in,maxi=-1000000.0;
	
	cin >> n;
	for(int i=0; i<n; i++) {
		cin >> in;
		maxi = max(maxi,in);
	}
	
	cout << fixed;
	cout << setprecision(4) << maxi << endl;
	
	return 0;
}
