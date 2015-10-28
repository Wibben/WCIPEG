#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	string puzzle;
	int dist=0;

	for(int i=0; i<4; i++) {
		cin >> puzzle;
		for(int j=0; j<4; j++) {
			int row = ((int)puzzle[j]-65)/4;
			int col = ((int)puzzle[j]-65)%4;
			if(puzzle[j]!='.') dist+=abs(row-i)+abs(col-j);
		}
	}

	cout << dist << endl;

	return 0;
}
