#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	float a,b,c,i,j,k;

	cin >> a >> b >> c >> i >> j >> k;

    cout << fixed << setprecision(6);
	if(a/i<=b/j && a/i<=c/k) cout << a-(a/i)*i << " " << b-(a/i)*j << " " << c-(a/i)*k << endl;
	else if(b/j<=a/i && b/j<=c/k) cout << a-(b/j)*i << " " << b-(b/j)*j << " " << c-(b/j)*k << endl;
	else if(c/k<=b/j && c/k<=a/i) cout << a-(c/k)*i << " " << b-(c/k)*j << " " << c-(c/k)*k << endl;

	return 0;
}
