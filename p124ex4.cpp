#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int y,g;
	double n,p;

	cin >> p >> y >> n >> g;

	p/=100.0;
	p+=1.0;

	for(int i=y; i<g; i++)
		n*=p;

	cout << llround(n) << endl;

	return 0;
}
