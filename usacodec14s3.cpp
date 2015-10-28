#include <iostream>

using namespace std;

int main()
{
	long long int n,t,cnt=1;

	cin >> n >> t;
	long long int spd;
	long long int pos[n];
	for(int i=0; i<n; i++) {
		cin >> pos[i] >> spd;
		pos[i] += (spd*t);
	}

	for(int i=n-2; i>=0; i--) {
		if(pos[i]>pos[i+1]) {
			pos[i] = pos[i+1];
		}
	}

	for(int i=1; i<n; i++) {
		if(pos[i]!=pos[i-1]) cnt++;
	}

	cout << cnt << endl;

	return 0;
}
