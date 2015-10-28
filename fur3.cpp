#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int n;
	
	cin >> n;
	int s[n];
	for(int i=0; i<n; i++)
		cin >> s[i];
	
	sort(s,s+n);
	
	cout << fixed;
	if(n%2==1) cout << setprecision(1) << (double)s[(n-1)/2] << endl;
	else cout << setprecision(1) << ((double)s[n/2]+(double)s[n/2-1])/2 << endl;

	return 0;
}
