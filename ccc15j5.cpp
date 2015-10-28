#include <iostream>

using namespace std;

int visited[251][251][251];

int pie(int piece, int ppl, int min)
{
	if(visited[piece][ppl][min]==0) {
		if(piece==ppl || ppl==1) visited[piece][ppl][min] = 1;
		else {
			int t = 0;
			for(int i=min; i<piece/ppl+1; i++)
				t += pie(piece-i,ppl-1,i);
			visited[piece][ppl][min] = t;
		}
	}
	return visited[piece][ppl][min];
}

int main()
{
    int piece,ppl;

	cin >> piece >> ppl;
	
	for(int i=1; i<=piece; i++)
		for(int j=1; j<=ppl; j++)
			for(int k=1; k<=piece; k++)
				visited[i][j][k] = 0;

	cout << pie(piece,ppl,1) << endl;

	return 0;
}
