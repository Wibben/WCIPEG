#include <iostream>

using namespace std;

int main()
{
	int p,g,r,o,goal;
	int combo=0,low=1000000;
	
	cin >> p >> g >> r >> o >> goal;
	
	for(int i=0; i<=goal/p; i++) {
		for(int j=0; j<=goal/g; j++) {
			for(int k=0; k<=goal/r; k++) {
				for(int l=0; l<=goal/o; l++) {
					if(i*p + j*g+ k*r + l*o == goal) {
						cout << "# of PINK is " << i << " # of GREEN is " << j << " # of RED is " << k << " # of ORANGE is " << l << endl;
						low = min(low,i+j+k+l);
						combo++;
					}
				}
			}
		}
	}
	cout << "Total combinations is " << combo << ".\nMinimum number of tickets to print is " << low << ".\n";

	return 0;
}
