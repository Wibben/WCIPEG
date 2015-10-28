#include <iostream>

using namespace std;

int main()
{
	int curx,cury,x,y,maxx,maxy;
	
	curx = cury = 0;
	
	cin >> maxx >> maxy >> x >> y;
	
	while(x!=0 || y!=0) {
		curx += x;
		cury += y;
		if(curx>maxx) curx = maxx;
		else if(curx<0) curx = 0;
		if(cury>maxy) cury = maxy;
		else if(cury<0) cury = 0;
		cout << curx << " " << cury << endl;
		cin >> x >> y;
	}
	
	return 0;
}
