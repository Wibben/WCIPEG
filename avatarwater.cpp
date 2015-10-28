#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	int a,b,c;

	cin >> a >> b >> c;

	cout << (abs(a-b) + abs(a-c) + abs(b-c))/2 << endl;

	return 0;
}
