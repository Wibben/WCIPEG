#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double a,i;
	
	cin >> a >> i;
	
	i-=0.99;
	
	cout << (int)ceil(a*i) << endl;

	return 0;
}
