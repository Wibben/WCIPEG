#include <iostream>

using namespace std;

int main()
{
	int n,cnt=1;
	
	cin >> n;
	int pos,spd[n];
	for(int i=0; i<n; i++) {
		cin >> pos >> spd[i];
	}
	
	for(int i=n-1; i>0; i--) {
		if(spd[i]>=spd[i-1]) cnt++;
		else spd[i-1] = spd[i];
	}
	
	cout << cnt << endl;
	
	return 0;
}
