#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double a,b;
	
	cin >> a >> b;
	
	cout << fixed;
	
	if(b==0.0) cout << (a==0.0 ? "indeterminate":"undefined") << endl;
	else cout << setprecision(2) << -1.0*b/a << endl;
	
	return 0;
}
