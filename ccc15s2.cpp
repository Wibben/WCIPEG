#include <iostream>

using namespace std;

int main()
{
	char jersey[1000001];
	char athlete[1000001];
	int j,a;
	
	cin >> j >> a;
	
	for(int i=1; i<=j; i++) {
		cin >> jersey[i];
		athlete[i] = 'A';
	}
	
	for(int i=1; i<=a; i++) {
		char size;
		int num;
		cin >> size >> num;
		
		if(size > athlete[num]) athlete[num] = size;
	}
	
	int out=0;
	for(int i=1; i<=j; i++) {
		if(athlete[i]>=jersey[i] && athlete[i]!='A') out++;
	}
	
	cout << out;
	
	return 0;
}
