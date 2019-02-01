#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	for(int i=0; i<5; i++) {
		int in;
		double digit=1;

		cin >> in;

		for(int j=1; j<=in; j++) {
            digit += log10(j);
		}

		cout << "The length of " << in << "! is " << (int)digit << endl;
	}

	return 0;
}
