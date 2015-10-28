#include <iostream>

using namespace std;

int main()
{
	int cur=1,roll;

	while(cur!=100) {
		cin >> roll;
		if(roll==0) {
            cout << "You Quit!" << endl;
            return 0;
		}
		cur+=roll;
		if(cur==9) cur = 34;
		else if(cur==40) cur = 64;
		else if(cur==54) cur = 19;
		else if(cur==67) cur = 86;
		else if(cur==90) cur = 48;
		else if(cur==99) cur = 77;
		else if(cur>100) cur-=roll;
		cout << "You are now on square " << cur << endl;
	}

	cout << "You Win!" << endl;

	return 0;
}
