#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int n,w,h,d,l;
	
	cin >> n >> w >> h;
	
	d = sqrt(w*w+h*h);
	
	while(n--) {
		cin >> l;
		cout << (l<=d "DA":"NE") << endl;
	}

	return 0;
}
