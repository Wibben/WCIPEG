#include <iostream>

using namespace std;

int main()
{
	string days[7] = {"Wednesday","Thursday","Friday","Saturday","Sunday","Monday","Tuesday"};
	int month[13] = {0,0,31,59,90,120,151,181,212,243,273,304,334};
	int d,m;
	
	cin >> d >> m;
	
	cout << days[(d+month[m])%7] << endl;
	
	return 0;
}
