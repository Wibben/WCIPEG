#include <iostream>

using namespace std;

int main()
{
	int h,m;
	
    cin >> h >> m;
	int t=1;
	while(t<=m) {
		int a = (-6)*t*t*t*t + h*t*t*t + 2*t*t + t;
		if(a<=0) {
			cout << "The balloon first touches ground at hour:" << endl << t << endl;;
			return 0;
		}
		t++;
	}
	cout << "The balloon does not touch ground in the given time." << endl;

	return 0;
}
