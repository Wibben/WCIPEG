#include <iostream>

using namespace std;

int main()
{
	int month[13] = {0,0,31,59,90,120,151,181,212,243,273,304,334};
	int leap[13] = {0,0,31,60,91,121,152,182,213,244,274,305,335};
	int d,m,y,t;

	cin >> t;
	while(t--) {
		cin >> y >> m >> d;
		cout << (y%4==0 ? leap[m]:month[m])+d << endl;
	}

	return 0;
}
