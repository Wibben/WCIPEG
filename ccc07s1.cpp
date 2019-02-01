#include <iostream>

using namespace std;

int main()
{
	int n,y,m,d;
	
	cin >> n;
	while(n--) {
		cin >> y >> m >> d;
		
		if(y<1989) cout << "Yes" << endl;
		else if(y>1989) cout << "No" << endl;
		else {
			if(m<2) cout << "Yes" << endl;
			else if(m>2) cout << "No" << endl;
			else {
				if(d<28) cout << "Yes" << endl;
				else cout << "No" << endl;
			}
		}
	}

	return 0;
}
