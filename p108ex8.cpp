#include <iostream>

using namespace std;

int main()
{
	int n,deg;
	
	cin >> n;
	for(int i=0; i<n; i++) {
		cin >> deg;
		if(deg<=45) cout << "N\n";
		else if(deg<=135) cout << "E\n";
		else if(deg<=225) cout << "S\n";
		else if(deg<315) cout << "W\n";
		else cout << "N\n";
	}
	
	return 0;
}
