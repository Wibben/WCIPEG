#include <iostream>

using namespace std;

int main()
{
	int a,b,c,d,e,f;
	
	cin >> a >> d >> b >> e >> c >> f;
	
	cout << (a==b ? c:(b==c ? a:b)) << " " << (d==e ? f:(e==f ? d:e)) << endl;

	return 0;
}
