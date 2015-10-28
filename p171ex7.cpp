#include <iostream>

using namespace std;

int main()
{
	int n;
	int ranges[6] = {0,0,0,0,0,0};
	
	cin >> n;
	while(n>=0) {
		if(n<10000) ranges[0]++;
		else if(n<20000) ranges[1]++;
		else if(n<30000) ranges[2]++;
		else if(n<40000) ranges[3]++;
		else if(n<50000) ranges[4]++;
		else ranges[5]++;
		cin >> n;
	}
	
	for(int i=0; i<6; i++)
		cout << ranges[i] << endl;

	return 0;
}
