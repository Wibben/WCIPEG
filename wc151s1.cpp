#include <iostream>

using namespace std;

int main()
{
	int n,m,t,total=0;

	cin >> n;
	for(int i=0; i<n; i++) {
		cin >> m >> t;
		total+=t;
	}

	cout << (total-m>0 ? total-m:0) << endl;

	return 0;
}
