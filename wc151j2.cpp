#include <iostream>

using namespace std;

int main()
{
	int junior,senior;

	cin >> junior >> senior;

	if(junior%senior==0) cout << senior << " group(s) of " << junior/senior << endl;
	else {
		int k = junior%senior;
		cout << senior-k << " group(s) of " << junior/senior << endl;
		cout << k << " group(s) of " << junior/senior+1 << endl;
	}

	return 0;
}
