#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int n,p;
	double b;

	cin >> n;
	while(n--) {
		cin >> b >> p;
		double ans = 1;
		while(p--) {
			ans*=b;
		}
		cout << fixed;
		cout << setprecision(2) << ans << endl;
	}

	return 0;
}
