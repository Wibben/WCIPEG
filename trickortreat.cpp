#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n,d,cnt=0;
	int house[10000];

	cin >> n >> d;
	for(int i=0; i<n; i++)
		cin >> house[i];

	sort(house,house+n);

	for(int i=0; i<n; i++) {
		if(house[i]<=d) {
			d -= house[i];
			cnt++;
			d--;
		}
	}

	cout << cnt << endl;

	return 0;
}
