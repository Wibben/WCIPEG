#include <iostream>

using namespace std;

int main()
{
	int h;

	cin >> h;

	for(int i=0,p=1; i<h; i++,p+=(i>h/2 ? -2:2),cout << endl) {
		for(int j=0; j<p; j++) cout << "*";
		for(int j=0; j<h*2-p*2; j++) cout << " ";
		for(int j=0; j<p; j++) cout << "*";
	}

	return 0;
}
