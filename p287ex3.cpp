#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	double in,mini=10000.0;
	
	cin >> n;
	for(int i=0; i<n; i++) {
		cin >> in;
		mini = min(mini,in);
	}
	
	cout << fixed;
	cout << setprecision(2) << mini << endl;
	
	return 0;
}
