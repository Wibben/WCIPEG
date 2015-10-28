#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int bill,candy,n;

	cin >> candy >> n;

	bill = pow(10.0,n);

	cout << candy-(candy%bill) + (candy%bill>=bill/2 ? bill:0) << endl;

	return 0;
}
