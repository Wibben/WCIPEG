#include <iostream>

using namespace std;

int main()
{
	float a,b,rec;
	
	cin >> a >> b >> rec;
	
	if(a>rec) cout << "Bob overdoses on day 1.\n";
	else if((a/2 + b) > rec) cout << "Bob overdoses on day 2.\n";
	else cout << "Bob never overdoses.\n";
	
	return 0;
}
