#include <iostream>
#include <math.h>

using namespace std;

bool findSpot(int size, int x, int y)
{
	int fifth = size/5;
	if(size>=5) {
		if(y<fifth && x>=fifth && x<4*fifth) return true;
		else if(y<2*fifth && x>=2*fifth && x<3*fifth) return true;
		else if(y<2*fifth && x>=fifth && x<2*fifth) return findSpot(size/5,x-fifth,y-fifth);
		else if(y<2*fifth && x>=3*fifth && x<4*fifth) return findSpot(size/5,x-3*fifth,y-fifth);
		else if(y<3*fifth && x>=2*fifth && x<3*fifth) return findSpot(size/5,x-2*fifth,y-2*fifth);
		else return false;
	}
}


int main()
{
	int t,m,x,y;

	cin >> t;
	while(t--) {
		cin >> m >> x >> y;

		cout << (findSpot((int)pow(5.0,m),x,y)? "crystal":"empty") << endl;
	}

	return 0;
}
