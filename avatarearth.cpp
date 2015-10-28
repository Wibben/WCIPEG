#include <iostream>

using namespace std;

int main()
{
	int a,b,c,d,e,f;

	cin >> a >> b >> c >> d >> e >> f;

	cout << ((a>c && a<e && b>d && b<f)?"Yes":"No") << endl;

	return 0;
}
