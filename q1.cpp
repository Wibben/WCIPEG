#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int t;
	
	cin >> t;
	int scores[t];
	for(int i=0; i<t; i++)
		cin >> scores[i];
	
	sort(scores,scores+t);
	
	cout << "The median on the test is ";
	cout << fixed;
	if(t%2==0) cout << setprecision(1) << (double)(scores[t/2]+scores[t/2-1])/2.0 << endl;
	else cout << setprecision(1) << (double)scores[(t-1)/2] << endl;
	
	return 0;
}
