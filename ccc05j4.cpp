#include <iostream>

using namespace std;

int main()
{
	int width,height,cutwidth,cutheight,steps;

	cin >> width >> height >> cutwidth >> cutheight >> steps;

	bool no[width][height];

	for(int i=0; i<width; i++)
	    for(int j=0; j<height; j++)
			no[i][j] = false;

	width--;
	height--;
	cutwidth--;
	cutheight--;

	int x,y;

	for(x=0; x<=cutwidth; x++)
		for(y=0; y<=cutheight; y++)
			no[x][y] = true;

	for (x=width-cutwidth; x<=width; x++)
		for(y=0; y<=cutheight; y++)
			no[x][y] = true;

	for (x=width-cutwidth; x<=width; x++)
		for(y=height-cutheight; y<=height; y++)
			no[x][y] = true;

	for (x=0; x<=cutwidth; x++)
		for(y = height-cutheight; y<=height; y++)
			no[x][y] = true;

	x = cutwidth + 1;
	y = 0;

	no[x][y] = true;
	while (steps > 0) {
	    int start = steps;
	    if (x+1<=width && !no[x+1][y] && steps-1>=0) {
			if (y-1<0 || no [x][y-1]) {
				x++;
				steps--;
				no[x][y] = true;
			}
	    }
	    if (y+1<=height && !no[x][y+1] && steps-1>=0) {
			if (x+1>width || no[x+1][y]) {
				y++;
				steps--;
				no [x] [y] = true;
			}
	    }
	    if (x-1>=0 && !no[x-1][y] && steps-1>=0) {
			if (y+1>height || no[x][y+1]) {
				x--;
				steps--;
				no[x][y] = true;
			}
	    }
	    if (y-1>=0 && !no[x][y-1] && steps-1>=0) {
			if (x-1<0 || no[x-1][y]) {
				y--;
				steps--;
				no[x][y] = true;
			}
	    }
	    if(steps==start) break;
	}

	cout << x+1 << endl << y+1 << endl;

	return 0;
}
