#include <iostream>
#include <queue>

using namespace std;

int main()
{
	queue<int> x,y;
	int t,r,c;

	cin >> t;
	for(int k=0; k<t; k++) {
        cin >> r >> c;
        cin.ignore();
        string graph[r];
        int dist[r][c];
        for(int i=0; i<r; i++) {
            getline(cin,graph[i]);
            for(int j=0; j<c; j++)
                dist[i][j] = -1;
        }

        dist[0][0] = 1;
        x.push(0);
        y.push(0);
        while(!x.empty()) {
            int xtemp = x.front();
            int ytemp = y.front();
            int d = dist[xtemp][ytemp];

            if(graph[xtemp][ytemp]=='+') {
                if(xtemp-1>-1 && graph[xtemp-1][ytemp]!='*' && (d+1<dist[xtemp-1][ytemp] || dist[xtemp-1][ytemp]==-1)) {
                    x.push(xtemp-1);
                    y.push(ytemp);
                    dist[xtemp-1][ytemp] = d+1;
                }
                if(xtemp+1<r && graph[xtemp+1][ytemp]!='*' && (d+1<dist[xtemp+1][ytemp] || dist[xtemp+1][ytemp]==-1)) {
                    x.push(xtemp+1);
                    y.push(ytemp);
                    dist[xtemp+1][ytemp] = d+1;
                }
                if(ytemp-1>-1 && graph[xtemp][ytemp-1]!='*' && (d+1<dist[xtemp][ytemp-1] || dist[xtemp][ytemp-1]==-1)) {
                    x.push(xtemp);
                    y.push(ytemp-1);
                    dist[xtemp][ytemp-1] = d+1;
                }
                if(ytemp+1<c && graph[xtemp][ytemp+1]!='*' && (d+1<dist[xtemp][ytemp+1] || dist[xtemp][ytemp+1]==-1)) {
                    x.push(xtemp);
                    y.push(ytemp+1);
                    dist[xtemp][ytemp+1] = d+1;
                }
            } else if(graph[xtemp][ytemp]=='|') {
                if(xtemp-1>-1 && graph[xtemp-1][ytemp]!='*' && (d+1<dist[xtemp-1][ytemp] || dist[xtemp-1][ytemp]==-1)) {
                    x.push(xtemp-1);
                    y.push(ytemp);
                    dist[xtemp-1][ytemp] = d+1;
                }
                if(xtemp+1<r && graph[xtemp+1][ytemp]!='*' && (d+1<dist[xtemp+1][ytemp] || dist[xtemp+1][ytemp]==-1)) {
                    x.push(xtemp+1);
                    y.push(ytemp);
                    dist[xtemp+1][ytemp] = d+1;
                }
            } else if(graph[xtemp][ytemp]=='-') {
                if(ytemp-1>-1 && graph[xtemp][ytemp-1]!='*' && (d+1<dist[xtemp][ytemp-1] || dist[xtemp][ytemp-1]==-1)) {
                    x.push(xtemp);
                    y.push(ytemp-1);
                    dist[xtemp][ytemp-1] = d+1;
                }
                if(ytemp+1<c && graph[xtemp][ytemp+1]!='*' && (d+1<dist[xtemp][ytemp+1] || dist[xtemp][ytemp+1]==-1)) {
                    x.push(xtemp);
                    y.push(ytemp+1);
                    dist[xtemp][ytemp+1] = d+1;
                }
            }

            x.pop();
            y.pop();
        }

        cout << dist[r-1][c-1] << endl;
	}

	return 0;
}
