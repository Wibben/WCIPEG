#include <iostream>

using namespace std;

int main()
{
	double p,a,b;
	int y,i;

	cin >> p >> a >> y >> b;

	p/=100.0;
	p+=1.0;

	for(i=0; a<b; i++)
		a*=p;

	cout << y+i << endl;

	return 0;
}
