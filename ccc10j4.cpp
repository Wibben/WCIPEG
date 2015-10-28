#include <iostream>

using namespace std;

int main()
{
	int n;

	cin >> n;
	while(n!=0) {
		int temp[n];
		for(int i=0; i<n; i++)
			cin >> temp[i];
		for(int i=1; i<n; i++) {
			bool cycle = true;
			for(int j=0; j<n-i-1; j++)
				if(temp[j+1]-temp[j]!=temp[j+i+1]-temp[j+i]) cycle = false;
			if(cycle) {
				cout << i << endl << endl;
				break;
			}
		}
		if(n==1) cout << 0 << endl;
		cin >> n;
	}

	return 0;
}
