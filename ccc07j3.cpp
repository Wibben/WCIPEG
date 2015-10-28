#include <iostream>

using namespace std;

int main()
{
	int box[11] = {0, 100, 500, 1000, 5000, 10000, 25000, 50000, 100000, 500000, 1000000};
	int n,choice,offer;
	float total = 1691600;

	cin >> n;
	for(int i=0; i<n; i++) {
		cin >> choice;
		total -= box[choice];
	}
	cin >> offer;

	if(offer > (total/(10-n))) cout << "deal" << endl;
	else cout << "no deal" << endl;

	return 0;
}
