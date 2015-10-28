#include <iostream>

using namespace std;

int main()
{
	int d,m;

	cin >> d >> m;

	cout << "Sun Mon Tue Wed Thr Fri Sat\n";

	for(int i=1; i<d; i++) {
        cout.width(4);
        cout << " ";
	}
	for(int i=1; i<=m; i++) {
	    cout.width(3);
		cout << i;
		if((i+d-1)%7==0) cout << endl;
		else cout << " ";
	}

	return 0;
}
