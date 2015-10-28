#include <iostream>

using namespace std;

int main()
{
	int quarters,a,b,c;
	int cnt=0;

	cin >> quarters >> a >> b >> c;

	while(quarters>0) {
		quarters--; a++; cnt++;
		if(a==35) {
			quarters+=30; a=0;
		}
		if(quarters==0) continue;
		quarters--; b++; cnt++;
		if(b==100) {
			quarters+=60; b=0;
		}
		if(quarters==0) continue;
		quarters--; c++; cnt++;
		if(c==10) {
			quarters+=9; c=0;
		}
	}

	cout << "Martha plays " << cnt << " times before going broke.";

	return 0;
}
