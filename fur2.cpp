#include <iostream>

using namespace std;

int main()
{
	int n,s;
	int tally[1001],high=0;

	fill(tally, tally+1001,0);

	cin >> n;
	while(n--) {
		cin >> s;
		tally[s]++;
		high = max(high,tally[s]);
	}

	int tallytally = 0;
	for(int i=0; i<1001; i++)
		if(tally[i]==high) tallytally++;

	cout << tallytally << endl;
	for(int i=0; i<1001; i++)
		if(tally[i]==high) cout << i << endl;

	return 0;
}
