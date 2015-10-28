#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int t,s,h;

	cin >> t >> s >> h;

	for(int i=0; i<t; i++)
		cout << "*" << setw(s+1) << "*" << setw(s+1) << "*" << endl;

	for(int i=0; i<2*s+3; i++,cout<<"*");
    cout << endl;

	for(int i=0; i<h; i++)
        cout << setw(s+2) << "*" << endl;

	return 0;
}

