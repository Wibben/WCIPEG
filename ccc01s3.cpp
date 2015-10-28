#include <iostream>
#include <queue>

using namespace std;

bool bfs(bool grid[26][26], int x, int y)
{
	queue<int> BFS;
	bool visited[26];

	for(int i=0; i<26; i++)
		visited[i] = 0;

	grid[x][y] = grid[y][x] = 0;

	BFS.push(0);
	visited[0] = 1;
	while(!BFS.empty()) {
		if(BFS.front()==1) {
            grid[x][y] = grid[y][x] = 1;
            return 0;
		}
		for(int i=0; i<26; i++) {
			if(grid[BFS.front()][i] && !visited[i]) {
				BFS.push(i);
				visited[i] = 1;
			}
		}
		BFS.pop();
	}

	grid[x][y] = grid[y][x] = 1;

	return 1;
}

int main()
{
	int cnt = 0;
	string in;
	bool grid[26][26];

	for(int i=0; i<26; i++)
		for(int j=0; j<26; j++)
			grid[i][j] = 0;

	cin >> in;
	while(in!="**") {
		grid[(int)(in[0]-65)][(int)(in[1]-65)] = grid[(int)(in[1]-65)][(int)(in[0]-65)] = 1;
		cin >> in;
	}

	for(int i=0; i<26; i++) {
		for(int j=i; j<26; j++) {
			if(grid[i][j]) {
				if(bfs(grid,i,j)) {
					cout << (char)(i+65) << (char)(j+65) << endl;
					cnt++;
				}
			}
		}
	}

	cout << "There are " << cnt << " disconnecting roads." << endl;

	return 0;
}
