#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n,q,query;

	cin >> n;
	int age[n];
	for(int i=0; i<n; i++) {
		cin >> age[i];
	}

	sort(age,age+n);

	cin >> q;
	for(int i=0; i<q; i++) {
		cin >> query;
		cout << age[query-1] << endl;
	}

	return 0;
}
