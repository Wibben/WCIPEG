#include <iostream>

using namespace std;

int main()
{
	string a,b;
	
	cin >> a >> b;
	
	if(a.length()+b.length()==7) cout << "WHITE" << endl;
	else if(a.length()+b.length()==8) cout << "BLUE" << endl;
	else if(a.length()+b.length()==9) cout << "RED" << endl;

	return 0;
}
