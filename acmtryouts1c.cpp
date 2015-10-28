#include <iostream>

using namespace std;

int main()
{
	int t,h,w,n;

	cin >> t;
	while(t--) {
		cin >> h >> w >> n;
		string m[h+1];
		char command;
		int r=0,c=0,treasure=0;
		m[0] = "                                                                                                    ";

		for(int i=1; i<=h; i++)
			cin >> m[i];
		for(int i=0; i<n; i++) {
			cin >> command;
			if(command=='D' && r+1<=h && m[r+1][c]!='S') r++;
			else if(command=='L' && c-1>=0 && m[r][c-1]!='S') c--;
			else if(command=='R' && c+1<w && m[r][c+1]!='S') c++;

			if(m[r][c]=='T') {
				treasure++;
				m[r][c] = 'E';
			}

			while(r+1<=h && m[r+1][c]=='E') r++;
		}

		cout << treasure << endl;
	}

	return 0;
}
