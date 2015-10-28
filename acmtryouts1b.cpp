#include <iostream>

using namespace std;

int lcm(int a, int b)
{
	for(int i=1; i<max(a,b); i++)
		if(i*min(a,b)%max(a,b)==0) return i*min(a,b);
	return a*b;
}

int main()
{
	int t,n;

	cin >> t;
	while(t--) {
		cin >> n;
		int foxData[n][3],cycle=1;
		for(int i=0; i<n; i++) {
			cin >> foxData[i][0] >> foxData[i][1] >> foxData[i][2];
			cycle = lcm(cycle,foxData[i][0]+foxData[i][1]);
		}

		bool sleep[cycle];
		for(int i=0; i<cycle; i++) {
            sleep[i] = 1;
			for(int j=0; j<n; j++) {
				int cur = foxData[j][2]%(foxData[j][0]+foxData[j][1]);
				if(cur < foxData[j][0]) sleep[i] = 0;
				foxData[j][2]++;
			}
		}

		bool power=1;
		for(int i=0; i<cycle; i++) {
            if(sleep[i]==1) {
                cout << i << endl;
                power=0;
                break;
            }
		} if(power) cout << "Foxen are too powerful" << endl;
	}

	return 0;
}
