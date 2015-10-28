#include <iostream>

using namespace std;

int main()
{
	int n,p=0,cur=1;
	
	cin >> n;
	while(cur<n) {
		cur*=2;
		p++;
	}
	
	cout << p << endl;

	return 0;
}
