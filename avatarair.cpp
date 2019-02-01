#include <iostream>

using namespace std;

int main()
{
	int n,m;
	string maze[2][101];
	int t=0;
	int curr,curc;
	int dr,dc;

	cin >> n >> m;
	cin.ignore();
	for(int i=0; i<n; i++) {
		getline(cin,maze[0][i]);
		maze[1][i] = maze[0][i];
		for(int j=0; j<m; j++) {
			if(maze[1][i][j]!='.') maze[1][i][j] = (maze[1][i][j]=='/' ? '\\':'/');
		}
	}

	curr = curc = 0;
	dr = 0;
	dc = 1;
	while(curr>=0 && curr<n && curc>=0 && curc<m) {
		t++;
		int used = t%2;

		curr+=dr;
		curc+=dc;

		if(curr>=0 && curr<n && curc>=0 && curc<m && maze[used][curr][curc]!='.') {
			if(maze[used][curr][curc]=='/') {
			    int temp = dr;
			    dr = 0-dc;
			    dc = 0-temp;
			} else {
			    int temp = dr;
			    dr = dc;
			    dc = temp;
			}
		}
	}

	cout << t << endl;

	return 0;
}
