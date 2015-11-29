#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> conn;
vector<int> graph[1000];
bool visited[1000];

void dfs(int node)
{
	if(!visited[node]) {
		visited[node] = 1;
		conn.push_back(node);
		for(int i=0; i<graph[node].size(); i++)
			dfs(graph[node][i]);
	}
}

int main()
{
	int n,c;
	cin >> n;

	for(int i=0; i<n; i++) {
		visited[i] = 0;
		for(int j=0; j<n; j++) {
			cin >> c;
			if(c==1) graph[i].push_back(j);
		}
	}

	for(int i=0; i<n; i++) {
		if(!visited[i]) {
			dfs(i);

			sort(conn.begin(),conn.end());

			for(int j=0; j<conn.size(); j++)
				cout << conn[j]+1 << " ";
			cout << endl;

			conn.clear();
		}
	}

	return 0;
}
