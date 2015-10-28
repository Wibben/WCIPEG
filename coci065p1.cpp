#include <iostream>

using namespace std;

int main()
{
	string moves;
	int a,b,c,temp;
	
	a = 1;
	b = 0;
	c = 0;
	
	cin >> moves;
	
	for(int i=0; i<moves.length(); i++) {
		if(moves[i]=='A') {
			temp = a;
			a = b;
			b = temp;
		} else if(moves[i]=='B') {
			temp = c;
			c = b;
			b = temp;
		} else if(moves[i]=='C') {
			temp = a;
			a = c;
			c = temp;
		}
	}
	
	cout << (a==b ? 3:(b==c ? 1:2)) << endl;

	return 0;
}
