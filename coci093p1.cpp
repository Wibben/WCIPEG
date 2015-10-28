#include <iostream>

using namespace std;

int main()
{
	int a,b,a1,a2,a3,b1,b2,b3;
	
	cin >> a >> b;
	
	a1 = a%10; a/=10;
	a2 = a%10; a/=10;
	a3 = a%10; a/=10;
	
	a = a1*100+a2*10+a3;
	
	b1 = b%10; b/=10;
	b2 = b%10; b/=10;
	b3 = b%10; b/=10;
	
	b = b1*100+b2*10+b3;
	
	cout << (a>b ? a:b) << endl;

	return 0;
}
