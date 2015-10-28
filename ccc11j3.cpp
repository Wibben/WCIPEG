#include <iostream>

using namespace std;

int sequence(int first, int second, int n)
{
	if(second > first) {
		return n;
	} else {
		return sequence(second, first-second, n+1);
	}
}

int main ()
{
	int a,b;

	cin >> a >> b;
	cout << sequence(a,b,2) << endl;

	return 0;
}
