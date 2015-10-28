#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double money;
	int time,m;

    cin >> money >> m >> time;

	cout << fixed;
	for(int i=0; i<=time; i++) {
		cout << i << " " << setprecision(2) << money << endl;
		money *= (1+0.01*m);
	}

	return 0;
}
