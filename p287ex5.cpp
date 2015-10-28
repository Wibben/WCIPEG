#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int t,n;
	
	cin >> t;
	while(t--) {
		cin >> n;
		n = abs(n);
		if(n<10) cout << 1 << endl;
		else if(n<100) cout << 2 << endl;
		else if(n<1000) cout << 3 << endl;
		else if(n<10000) cout << 4 << endl;
		else if(n<100000) cout << 5 << endl;
		else if(n<1000000) cout << 6 << endl;
		else if(n<10000000) cout << 7 << endl;
	}

	return 0;
}
