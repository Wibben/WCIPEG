#include <iostream>
#include <queue>

using namespace std;

int main()
{
	int n,r,c,pr,pc,kr,kc;

	cin >> n;
	while(n--) {
		cin >> r >> c >> pr >> pc >> kr >> kc;
		int board[101][101];
		int pawnpath[101];
		bool moveon = false;
		queue< pair<int,int> > BFS;

		for(int i=0; i<=r; i++)
			for(int j=0; j<=c; j++)
				board[i][j] = 100000;

		board[kr][kc] = 0;
		BFS.push(make_pair(kr,kc));
		while(!BFS.empty()) {
			int cr = BFS.front().first;
			int cc = BFS.front().second;
			int cur = board[cr][cc];
			BFS.pop();

			if(cr-2>0 && cc-1>0 && board[cr-2][cc-1]==100000) {
				board[cr-2][cc-1] = cur+1;
				BFS.push(make_pair(cr-2,cc-1));
			}
			if(cr-2>0 && cc+1<=c && board[cr-2][cc+1]==100000) {
				board[cr-2][cc+1] = cur+1;
				BFS.push(make_pair(cr-2,cc+1));
			}
			if(cr+2<=r && cc-1>0 && board[cr+2][cc-1]==100000) {
				board[cr+2][cc-1] = cur+1;
				BFS.push(make_pair(cr+2,cc-1));
			}
			if(cr+2<=r && cc+1<=c && board[cr+2][cc+1]==100000) {
				board[cr+2][cc+1] = cur+1;
				BFS.push(make_pair(cr+2,cc+1));
			}
			if(cr-1>0 && cc-2>0 && board[cr-1][cc-2]==100000) {
				board[cr-1][cc-2] = cur+1;
				BFS.push(make_pair(cr-1,cc-2));
			}
			if(cr-1>0 && cc+2<=c && board[cr-1][cc+2]==100000) {
				board[cr-1][cc+2] = cur+1;
				BFS.push(make_pair(cr-1,cc+2));
			}
			if(cr+1<=r && cc-2>0 && board[cr+1][cc-2]==100000) {
				board[cr+1][cc-2] = cur+1;
				BFS.push(make_pair(cr+1,cc-2));
			}
			if(cr+1<=r && cc+2<=c && board[cr+1][cc+2]==100000) {
				board[cr+1][cc+2] = cur+1;
				BFS.push(make_pair(cr+1,cc+2));
			}
		}

		for(int i=0,j=pr; j<=r; j++,i++) {
			pawnpath[i] = board[j][pc];
		}

		for(int i=0; i<r-pr && !moveon; i++) {
            if(pawnpath[i]<=i && (i-pawnpath[i])%2==0) {
                cout << "Win in " << i << " knight move(s).\n";
                moveon = true;
            }
		}
		for(int i=0; i<r-pr+1 && !moveon; i++) {
            if(pawnpath[i]<=i-1 && (i-1-pawnpath[i])%2==0) {
                cout << "Stalemate in " << i-1 << " knight move(s).\n";
                moveon = true;
            }
		}
		if(!moveon) cout << "Loss in " << (r-pr-1<0 ? 0:r-pr-1) << " knight move(s).\n";
	}

	return 0;
}
