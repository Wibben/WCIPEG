#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int n;
	double high = 0.0;
	
	cin >> n;
	double num[n];
	for(int i=0; i<n; i++) {
		cin >> num[i];
		high = max(high,num[i]);
	}
	
	cout << fixed;
	for(int i=0; i<n; i++)
		if(num[i]!=high) cout << setprecision(2) << num[i] << endl;
	cout << setprecision(2) << high << endl;

	return 0;
}
