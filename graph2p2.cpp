#include <iostream>
#include <queue>

using namespace std;

int main()
{
	int n,start;
	bool arr[1000][1000];
	bool visited[1000];
	bool acyclic = true;
	queue<int> bfs;

	cin >> n;
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			cin >> arr[i][j];
			if(arr[i][j]) start = i;
		}
		visited[i] = false;
	}

	visited[start] = true;
	bfs.push(start);
	while(!bfs.empty()) {
		int cur = bfs.front();
		bfs.pop();

		for(int i=0; i<n; i++) {
			if(arr[cur][i] && !visited[i]) {
				visited[i] = true;
				bfs.push(i);
			} else if(arr[cur][i] && visited[i]) {
				acyclic = false;
			}
		}
	}

	cout << (acyclic ? "YES":"NO");

	return 0;
}
