#include <iostream>

using namespace std;

int main()
{
	int n;
	int tally[101];
	int high=0;
	
	fill(tally,tally+101,0);
	
	cin >> n;
	while(n>-1) {
		tally[n]++;
		high = max(high,tally[n]);
		cin >> n;
	}
	
	for(int i=0; i<101; i++)
		if(tally[i]==high) cout << i << endl;

	return 0;
}
