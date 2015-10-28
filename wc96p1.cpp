#include <iostream>

using namespace std;

int main()
{
	int n,x,y,t,b;
	
	for(int i=0; i<5; i++) {
		cin >> n;
		int fish[n+1];
		fill(fish,fish+n+1,0);
		do {
			cin >> x >> y >> t >> b;
			for(int k=t; k<=b; k++)
				fish[k]++;
		} while(x!=0 && y!=0);
		int most=0,high;
		for(int j=1; j<=n; j++) {
			if(fish[j]>most) {
				most = fish[j];
				high = j;
			}
		}
		cout << high << endl;
	}

	return 0;
}
