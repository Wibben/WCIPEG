#include <iostream>

using namespace std;

int main()
{
	int n;
	string grid[4];

	cin >> n;
	while(n--) {
		bool four = 0;
		for(int i=0; i<4; i++) {
			cin >> grid[i];
			if(grid[i]=="XXXX") four = 1;
		}

		bool diag = 1;
		for(int i=0; i<4; i++) {
			if(grid[i][i]=='O') diag = 0;
			bool down = 1;
			for(int j=0; j<4; j++)
				if(grid[j][i]=='O') down = 0;
			if(down) four = 1;
		}
		if(diag) four = 1;

		diag = 1;
		for(int i=0,j=3; i<4; i++,j--)
			if(grid[i][j]=='O') diag = 0;
		if(diag) four = 1;

		cout << (four ? "Yes":"No") << endl;

		cin.ignore();
	}

	return 0;
}
