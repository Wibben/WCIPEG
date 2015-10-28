#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double l,h;

	cin >> l >> h;

	cout << (lround(l*l*h/3.0)==0 ? 1:lround(l*l*h/3.0)) << endl;

	return 0;
}
