// The Brute Force is Real
#include <iostream>
#include <queue>

using namespace std;

int h,w,row,col,hr,hc;
string field[6];

bool goHome()
{
	queue<int> bfsrow;
	queue<int> bfscol;
	bool visited[6][6] = {0};

	bfsrow.push(row);
	bfscol.push(col);
	visited[row][col] = 1;
	while(!bfsrow.empty()) {
		int r = bfsrow.front();
		int c = bfscol.front();
		bfsrow.pop(); bfscol.pop();

		if(field[r][c]=='H') return true;

		if(r+1<h && !visited[r+1][c] && field[r+1][c]!='T') {
			bfsrow.push(r+1); bfscol.push(c);
			visited[r+1][c] = 1;
		}
		if(r-1>=0 && !visited[r-1][c] && field[r-1][c]!='T') {
			bfsrow.push(r-1); bfscol.push(c);
			visited[r-1][c] = 1;
		}
		if(c+1<w && !visited[r][c+1] && field[r][c+1]!='T') {
			bfsrow.push(r); bfscol.push(c+1);
			visited[r][c+1] = 1;
		}
		if(c-1>=0 && !visited[r][c-1] && field[r][c-1]!='T') {
			bfsrow.push(r); bfscol.push(c-1);
			visited[r][c-1] = 1;
		}
	}

	return false;
}

int main()
{
	int t;

	cin >> t;

    out:
	while(t--) {
		cin >> h >> w;
		for(int i=0; i<h; i++) {
			cin >> field[i];
			for(int j=0; j<w; j++) {
				if(field[i][j]=='F') {
					row=i;
					col=j;
				} else if(field[i][j]=='H') {
                    hr=i;
                    hc=j;
				}
			}
		}

		if(!goHome()) {
			cout << "0" << endl;
			goto out;
		}

		for(int i=0; i<h; i++) {
			for(int j=0; j<w; j++) {
				if((i!=row || j!=col) && (i!=hr || j!=hc) && field[i][j]=='G') {
					field[i][j] = 'T';
					if(!goHome()) {
						cout << "1" << endl;
						goto out;
					}
					field[i][j] = 'G';
				}
			}
		}

		for(int i=0; i<h; i++) {
			for(int j=0; j<w; j++) {
				for(int k=0; k<h; k++) {
					for(int l=0; l<w; l++) {
						if((i!=row || j!=col) && (k!=row || l!=col) && (i!=hr || j!=hc) && (k!=hr || l!=hc) && field[i][j]=='G' && field[k][l]=='G') {
							field[i][j] = 'T';
							field[k][l] = 'T';
							if(!goHome()) {
								cout << "2" << endl;
								goto out;
							}
							field[i][j] = 'G';
							field[k][l] = 'G';
						}
					}
				}
			}
		}

		for(int i=0; i<h; i++) {
			for(int j=0; j<w; j++) {
				for(int k=0; k<h; k++) {
					for(int l=0; l<w; l++) {
						for(int m=0; m<h; m++) {
							for(int n=0; n<w; n++) {
								if((i!=row || j!=col) && (k!=row || l!=col) && (m!=row || n!=col) && (i!=hr || j!=hc) && (k!=hr || l!=hc) && (m!=hr || n!=hc) && field[i][j]=='G' && field[k][l]=='G' && field[m][n]=='G') {
									field[i][j] = 'T';
									field[k][l] = 'T';
									field[m][n] = 'T';
									if(!goHome()) {
										cout << "3" << endl;
										goto out;
									}
									field[i][j] = 'G';
									field[k][l] = 'G';
									field[m][n] = 'G';
								}
							}
						}
					}
				}
			}
		}

		cout << "4" << endl;
	}

	return 0;
}
