#include <iostream>

using namespace std;

int main()
{
	int a,e;
	
	cin >> a >> e;
	
	if(a>2 && e<5)
		cout << "TroyMartian" << endl;
	if(a<7 && e>1)
		cout << "VladSaturnian" << endl;
	if(a<3 && e<4)
		cout << "GraemeMercurian" << endl;
	
	return 0;
}