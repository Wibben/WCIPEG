#include <iostream>

using namespace std;

int main()
{
	int m,x;
	
	cin >> x >> m;
	
	for(int i=1; i<m; i++) {
		if((x*i%m==1)) {
			cout << i << endl;
			return 0;
		}
	}
	
	cout << "No such integer exists." << endl;
	
	return 0;
}
