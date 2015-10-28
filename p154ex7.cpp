#include <iostream>

using namespace std;

int main()
{
	int m,n;
	
	cin >> m >> n;
	
	for(int i=m; i<=n; i++) {
		int h = i/100;
		int t = (i/10)%10;
		int o = i%10;
		if(i == h*h*h+t*t*t+o*o*o) cout << i << endl;
	}

	return 0;
}
