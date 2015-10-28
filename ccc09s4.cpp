#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int n,t,k;
	int x,y,c,p;
	int d;
	
	ios_base::sync_with_stdio(false);
	
	cin >> n >> t;
	int cities[n+1][n+1];
	int dist[n+1];
	int price[n+1];
	bool visited[n+1];
	for(int i=0; i<=n; i++) {
		for(int j=0; j<=n; j++) {
			cities[i][j] = 10000;
		}
		visited[i] = false;
		dist[i] = 10000;
		price[i] = 10000;
	}

	for(int i=0; i<t; i++) {
		cin >> x >> y >> c;
		cities[x][y] = cities[y][x] = c;
	}
	cin >> k;
	for(int i=0; i<k; i++) {
		cin >> x >> p;
		price[x] = p;
	}
	cin >> d;

	// Dijkstra's algorithm
	dist[d] = 0;
	int next = d;
	for(int i=1; i<n; i++) {
		int shortest=10000;
        int cur = next;

		visited[cur] = true;

		for(int j=1; j<=n; j++) {
			if(cities[cur][j]+dist[cur] < dist[j] && !visited[j]) {
				dist[j] = cities[cur][j]+dist[cur];
			}
			if(dist[j]<shortest && !visited[j]) {
				shortest = dist[j];
				next = j;
			}
		}
	}

	int best = 100000;
	for(int i=1; i<=n; i++) {
		best = min(best,dist[i]+price[i]);
	}

	cout << best << endl;

	return 0;
}
