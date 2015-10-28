#include <iostream>

using namespace std;

int board[9][9];

bool left(int r, int c, int colour)
{
	for(int i=c-1; i>0; i--) {
		if(board[r][i]==0) return false;
		else if(board[r][i]==colour) return true;
	}

	return false;
}

bool right(int r, int c, int colour)
{
	for(int i=c+1; i<9; i++) {
		if(board[r][i]==0) return false;
		else if(board[r][i]==colour) return true;
	}

	return false;
}

bool up(int r, int c, int colour)
{
	for(int i=r-1; i>0; i--) {
		if(board[i][c]==0) return false;
		else if(board[i][c]==colour) return true;
	}

	return false;
}

bool down(int r, int c, int colour)
{
	for(int i=r+1; i<9; i++) {
		if(board[i][c]==0) return false;
		else if(board[i][c]==colour) return true;
	}

	return false;
}

bool ur(int r, int c, int colour)
{
	for(int i=r-1, j=c+1; i>0, j<9; i--,j++) {
		if(board[i][j]==0) return false;
		else if(board[i][j]==colour) return true;
	}

	return false;
}

bool dr(int r, int c, int colour)
{
	for(int i=r+1, j=c+1; i<9, j<9; i++,j++) {
		if(board[i][j]==0) return false;
		else if(board[i][j]==colour) return true;
	}

	return false;
}

bool ul(int r, int c, int colour)
{
	for(int i=r-1, j=c-1; i>0, j>0; i--,j--) {
		if(board[i][j]==0) return false;
		else if(board[i][j]==colour) return true;
	}

	return false;
}

bool dl(int r, int c, int colour)
{
	for(int i=r+1, j=c-1; i<9, j>0; i++,j--) {
		if(board[i][j]==0) return false;
		else if(board[i][j]==colour) return true;
	}

	return false;
}

void place(int r, int c, int colour)
{
	board[r][c] = colour;
	if(left(r,c,colour)) {
		for(int i=c-1; i>0; i--) {
			if(board[r][i]==colour) break;
			else board[r][i] = colour;
		}
	}

	if(right(r,c,colour)) {
		for(int i=c+1; i<9; i++) {
			if(board[r][i]==colour) break;
			else board[r][i] = colour;
		}
	}

	if(up(r,c,colour)) {
		for(int i=r-1; i>0; i--) {
			if(board[i][c]==colour) break;
			else board[i][c] = colour;
		}
	}

	if(down(r,c,colour)) {
		for(int i=r+1; i<9; i++) {
			if(board[i][c]==colour) break;
			else board[i][c] = colour;
		}
	}

	if(ur(r,c,colour)) {
		for(int i=r-1, j=c+1; i>0, j<9; i--,j++) {
			if(board[i][j]==colour) break;
			else board[i][j] = colour;
		}
	}

	if(dr(r,c,colour)) {
		for(int i=r+1, j=c+1; i<9, j<9; i++,j++) {
			if(board[i][j]==colour) break;
			else board[i][j] = colour;
		}
	}

	if(ul(r,c,colour)) {
		for(int i=r-1, j=c-1; i>0, j>0; i--,j--) {
			if(board[i][j]==colour) break;
			else board[i][j] = colour;
		}
	}

	if(dl(r,c,colour)) {
		for(int i=r+1, j=c-1; i<9, j>0; i++,j--) {
			if(board[i][j]==colour) break;
			else board[i][j] = colour;
		}
	}
}

int main()
{
	char con;
	int n,r,c;
	bool blackturn = true;

	// 0 = none
	// 1 = white
	// 2 = black

	for(int i=1; i<9; i++)
		for(int j=1; j<9; j++)
			board[i][j] = 0;

	cin >> con;
	if(con=='a') {
		board[4][4] = board[5][5] = 1;
		board[4][5] = board[5][4] = 2;
	} else if(con=='b') {
		for(int i=1; i<9; i++) {
			board[i][i] = 2;
			board[i][9-i] = 1;
		}
	} else if(con=='c') {
		for(int i=1; i<9; i++)
			for(int j=3; j<7; j++)
				board[i][j] = (j<=4 ? 2:1);
	}

	cin >> n;
	for(int i=0; i<n; i++) {
		cin >> r >> c;
		place(r,c,(blackturn ? 2:1));
		blackturn = (blackturn ? 0:1);
	}

	int black,white;
	black = white = 0;
	for(int i=1; i<9; i++) {
        for(int j=1; j<9; j++) {
            if(board[i][j]==1) white++;
            else if(board[i][j]==2) black++;
        }
	}

	cout << black << " " << white << endl;

	return 0;
}
