#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int c,l,w,peri;

	cin >> c;
	while(c!=0) {
		peri = 13002;
		for(int i=1; i<=sqrt(c); i++) {
			if(c%i==0 && 2*(i+c/i)<peri) {
				peri = 2*(i+c/i);
				l = i;
				w = c/i;
			}
		}
		cout << "Minimum perimeter is " << peri << " with dimensions " << l << " x " << w << endl;
		cin >> c;
	}

	return 0;
}
