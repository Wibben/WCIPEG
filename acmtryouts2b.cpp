#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int t,l,n,m;
	int c,r,d,h;

	cin >> t;

	while(t--) {
		cin >> l >> n;
		int lane[l];
		fill(lane,lane+l,0);

		while(n--) {
			cin >> c >> r >> d; c--;
			for(int i=c; i>=0 && i>=c-r; i--)
				lane[i]+=d;
			for(int i=c+1; i<l && i<=c+r; i++)
				lane[i]+=d;
		}

		cin >> m;
		nextBloon:
		while(m--) {
			cin >> h;
			for(int i=0; i<l; i++) {
				h-=lane[i];
				if(h<=0) {
					cout << i+1 << endl;
					goto nextBloon;
				}
			}
			cout << "Bloon leakage" << endl;
		}
	}

	return 0;
}
