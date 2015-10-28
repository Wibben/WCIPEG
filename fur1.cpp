#include <iostream>

using namespace std;

int main()
{
	int n;
	int prev,now,first,prod=0;
	
	cin >> n >> prev;
	first = prev;
	for(int i=1; i<n; i++) {
		cin >> now;
		prod = max(prod,prev*now);
		prev = now;
	}
	prod = max(prod,now*first);
	
	cout << prod << endl;
	
	return 0;
}
