#include <iostream>

using namespace std;

int main()
{
	int t,w;
	
	cin >> t;
	while(t--) {
		cin >> w;
		if(w<=30) cout << 38 << endl;
		else if(w<=50) cout << 55 << endl;
		else if(w<=100) cout << 73 << endl;
		else cout << 73+24*((w-101)/50+1) << endl;
	}
	
	return 0;
}
