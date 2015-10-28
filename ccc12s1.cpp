#include <iostream>

using namespace std;

int main()
{
	int x;
	
	cin >> x;
	
	if(x<4) cout << 0 << endl;
	else cout << ((x-1)*(x-2)*(x-3))/6 << endl;

	return 0;
}
