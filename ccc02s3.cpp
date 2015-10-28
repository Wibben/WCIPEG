#include <iostream>

using namespace std;

int main()
{
	int r,c,m;

	cin >> r >> c;
	char grid[r][c];
	for(int i=0; i<r; i++)
		for(int j=0; j<c; j++)
			cin >> grid[i][j];

	cin >> m;
	char mov[m];
	for(int i=0; i<m; i++)
		cin >> mov[i];

	for(int i=0; i<r; i++) {
		for(int j=0; j<c; j++) {
			if(grid[i][j]!='X') {
				for(int k=0; k<4; k++) {
					int dir = k;
					// 0 = up
					// 1 = left
					// 2 = down
					// 3 = right
					int curr = i;
					int curc = j;
					bool stop = false;
					for(int l=0; l<m; l++) {
						if(mov[l]=='F') {
							if(dir==0 && curr-1>=0 && grid[curr-1][curc]!='X') curr--;
							else if(dir==1 && curc+1<c && grid[curr][curc+1]!='X') curc++;
							else if(dir==2 && curr+1<r && grid[curr+1][curc]!='X') curr++;
							else if(dir==3 && curc-1>=0 && grid[curr][curc-1]!='X') curc--;
							else {
								stop = true;
								break;
							}
						} else if(mov[l]=='L') {
							if(dir==0) dir = 3;
							else if(dir==1) dir = 0;
							else if(dir==2) dir = 1;
							else if(dir==3) dir = 2;
						} else if(mov[l]=='R') {
							if(dir==0) dir = 1;
							else if(dir==1) dir = 2;
							else if(dir==2) dir = 3;
							else if(dir==3) dir = 0;
						}
					}
					if(!stop) grid[curr][curc] = '*';
				}
			}
		}
	}

	for(int i=0; i<r; i++,cout<<endl)
		for(int j=0; j<c; j++)
			cout << grid[i][j];

	return 0;
}
