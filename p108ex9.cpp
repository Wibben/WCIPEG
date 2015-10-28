#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int t,hour;
	double wage;
	char cat,don;
	double tax[5] = {1.0,0.9,0.8,0.71,0.65};
	
	cin >> t;
	while(t--) {
		double pay=0.0;
		cin >> wage >> hour >> cat >> don;
		pay += (hour>40 ? wage*40+2*wage*(hour-40):wage*hour);
		pay *= tax[(int)(cat-'A')];
		pay -= (don=='y' ? 10.0:0.0);
		cout << fixed;
		cout << setprecision(2) << pay << endl;
		cin.ignore();
	}

	return 0;
}
