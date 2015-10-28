#include <iostream>

using namespace std;

int main()
{
	int a,b,n,cmd;
	char x,y;

	a = b = 0;

	cin >> cmd;
	while(cmd!=7) {
		if(cmd==1) {
			cin >> x >> n;
			(x=='A' ? a:b) = n;
		} else if(cmd==2) {
			cin >> x;
			cout << (x=='A' ? a:b) << endl;
		} else if(cmd==3) {
            cin >> x >> y;
            (x=='A' ? a:b) += (y=='A' ? a:b);
		} else if(cmd==4) {
            cin >> x >> y;
            (x=='A' ? a:b) *= (y=='A' ? a:b);
		} else if(cmd==5) {
            cin >> x >> y;
            (x=='A' ? a:b) -= (y=='A' ? a:b);
		} else if(cmd==6) {
            cin >> x >> y;
            (x=='A' ? a:b) /= (y=='A' ? a:b);
		}
		cin >> cmd;
	}

	return 0;
}
