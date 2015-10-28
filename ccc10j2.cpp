#include <iostream>

using namespace std;

int main()
{
	int a,b,c,d,s;

	cin >> a >> b >> c >> d >> s;

	int nikky = (a-b)*(s/(a+b)) + ((s%(a+b))<=a ? s%(a+b):a-s%(a+b));
	int byron = (c-d)*(s/(c+d)) + ((s%(c+d))<=c ? s%(c+d):c-s%(c+d));

    if(nikky==byron) cout << "Tied" << endl;
    else cout << (nikky>byron ? "Nikky":"Byron") << endl;

	return 0;
}
