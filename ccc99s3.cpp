#include <iostream>
#include <cmath>

using namespace std;

char fractal[1000][1000];

void fract(int n, int r, int c, int side)
{
	if(n>0) {
		for(int i=r; i<r+side; i++)
			for(int j=c; j<c+side; j++)
				fractal[i][j] = ' ';

		fract(n-1,r-2*side/3,c-2*side/3,side/3);
		fract(n-1,r+side/3,c-2*side/3,side/3);
		fract(n-1,r+4*side/3,c-2*side/3,side/3);

		fract(n-1,r-2*side/3,c+side/3,side/3);
		fract(n-1,r+4*side/3,c+side/3,side/3);

		fract(n-1,r-2*side/3,c+4*side/3,side/3);
		fract(n-1,r+side/3,c+4*side/3,side/3);
		fract(n-1,r+4*side/3,c+4*side/3,side/3);
	}
}

int main()
{
	int d,n,b,t,l,r;

	cin >> d;
	while(d--) {
		cin >> n >> b >> t >> l >> r;

		int side = (int)pow(3.0,(double)n);
		for(int i=0; i<side; i++)
			for(int j=0; j<side; j++)
				fractal[i][j] = '*';

		fract(n,side/3,side/3,side/3);

		for(int i=side-t; i<=side-b; i++) {
			for(int j=l-1; j<r; j++)
				cout << fractal[i][j] << " ";
			cout << endl;
		}
	}

	return 0;
}
