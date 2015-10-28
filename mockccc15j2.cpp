#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double p,q,w,m;

	cin >> p >> q >> w;

	w/=100.00;

	m = (q-0.5-p*(1.0-w))/w;

	if(m<=0.0) cout << 0 << endl;
	else if(m>100.0) cout << "DROP THE COURSE" << endl;
	else cout << lround(m) << endl;

	return 0;
}
