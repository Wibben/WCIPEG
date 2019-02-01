#include <iostream>

using namespace std;

int main()
{
	int n,m,w;
	int total = 0;

	cin >> n >> m;

	while(n--) {
		cin >> w;
		if(w<=m) total+=w;
	}

	cout << total << endl;

	return 0;
}
