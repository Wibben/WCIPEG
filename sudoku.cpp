#include <iostream>

using namespace std;

int sodoku[9][9];

void solve(int r, int c)
{
    if(r==9) {
        bool rowtaken[10] = {0,0,0,0,0,0,0,0,0,0};
        bool coltaken[10] = {0,0,0,0,0,0,0,0,0,0};
        bool boxtaken[10] = {0,0,0,0,0,0,0,0,0,0};
        bool okay = 1;

        for(int i=0; i<9; i++) {
            if(rowtaken[sodoku[8][i]]==1) okay = 0;
            rowtaken[sodoku[8][i]] = 1;
        }
        for(int i=0; i<9; i++) {
            if(coltaken[sodoku[i][8]]==1) okay = 0;
            coltaken[sodoku[i][8]] = 1;
        }
        for(int i=6; i<9; i++) {
            for(int j=6; j<9; j++) {
                if(boxtaken[sodoku[i][j]]==1) okay = 0;
                boxtaken[sodoku[i][j]] = 1;
            }
        }

        if(okay) {
            for(int i=0; i<9; i++) {
                for(int j=0; j<9; j++)
                    cout << sodoku[i][j];
                cout << endl;
            }
        }
    } else if(sodoku[r][c]==0) {

        bool avail[10] = {1,1,1,1,1,1,1,1,1,1};
        int rblock,cblock;

        if(r<3) rblock = 0;
        else if(r<6) rblock = 3;
        else rblock = 6;

        if(c<3) cblock = 0;
        else if(c<6) cblock = 3;
        else cblock = 6;

        for(int i=0; i<9; i++)
            if(sodoku[i][c]!=0) avail[sodoku[i][c]] = 0;
        for(int i=0; i<9; i++)
            if(sodoku[r][i]!=0) avail[sodoku[r][i]] = 0;
        for(int i=rblock; i<rblock+3; i++)
            for(int j=cblock; j<cblock+3; j++)
                if(sodoku[i][j]!=0) avail[sodoku[i][j]] = 0;

        for(int i=1; i<10; i++) {
            if(avail[i]) {
                sodoku[r][c] = i;

                if(c==8) solve(r+1,0);
                else solve(r,c+1);
                sodoku[r][c] = 0;
            }
        }
    } else {
        if(c==8) solve(r+1,0);
        else solve(r,c+1);
    }
}

void input()
{
	string puzzle = "";
	string in;
	while(puzzle.length()<81) {
		getline(cin,in);
		puzzle+=in;
	}

	for(int i=0,pos=0; i<9; i++) {
		for(int j=0; j<9; j++,pos++) {
			if(puzzle[pos]=='.') sodoku[i][j] = 0;
			else sodoku[i][j] = (int)(puzzle[pos]-'0');
		}
	}
}

int main()
{
	input();

	solve(0,0);

	return 0;
}
