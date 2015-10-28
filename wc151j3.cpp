#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n,t=0;
	int songs[100];

	cin >> n;
	for(int i=0; i<n; i++) {
		cin >> songs[i];
		t+=songs[i];
	}

	sort(songs,songs+n);

	cout << t+songs[n-1]+songs[n-2]+10 << endl;

	return 0;
}
