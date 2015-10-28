#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n;

	cin >> n;
	while(n--) {
		int s;
		int maxdist = 0;
		cin >> s;
		int x[s],y[s];
		int posx[s+1],posy[s+1];
		for(int i=0; i<s; i++)
			cin >> x[i];
		for(int i=0; i<s; i++)
			cin >> y[i];

        for(int i=0; i<=s; i++) {
            posx[i] = 100000000;
            posy[i] = -1;
        }

        for(int i=0; i<s; i++)
            posx[x[i]] = min(i,posx[x[i]]);
        for(int i=0; i<s; i++)
            posy[y[i]] = max(i,posy[y[i]]);

        for(int i=1; i<=s; i++)
            if(posy[i]>posx[i]) maxdist = max(maxdist,posy[i]-posx[i]);

		cout << "The maximum distance is " << maxdist << endl;
	}

	return 0;
}
