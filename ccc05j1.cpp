#include <iostream>

using namespace std;

int main()
{
	int day,eve,wee;

	cin >> day >> eve >> wee;

	int a = ((day-100>0)?((day-100)*25):0) + eve*15 + wee*20;
	int b = ((day-250>0)?((day-250)*25):0) + eve*35 + wee*25;

	cout << "Plan A costs " << a << " cents" << endl;
	cout << "Plan B costs " << b << " cents" << endl;
	if(a==b) cout << "Plan A and B are the same price." << endl;
	else if(a<b) cout << "Plan A is cheapest." << endl;
	else cout << "Plan B is cheapest." << endl;

	return 0;
}
