#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	string line;
	
	cin >> n;
	cin.ignore();
	while(n--) {
		getline(cin,line);
		
		sort(line.begin(),line.end());
		
		cout << ((line=="abcdefghijklmnopqrstuvwxyz") ? "OK.":"Nope.") << endl;
	}

	return 0;
}
