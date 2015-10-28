#include <iostream>

using namespace std;

int main()
{
	int n;

	cin >> n;
	int graph[n][n];
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			cin >> graph[i][j];
			if(graph[i][j]==0) graph[i][j] = 1000000;
		}
	}

	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++)
			for(int k=0; k<n; k++)
				if(graph[i][j]>graph[i][k]+graph[k][j])
					graph[i][j] = graph[i][k] + graph[k][j];

	cout << graph[0][n-1] << endl;

	return 0;
}
