#include <iostream>

using namespace std;

int main()
{
	int t;
	string line;

	cin >> t; cin.ignore();
	while(t--) {
		getline(cin,line);
		for(int i=0; i<line.length(); i++)
			if(line[i]>='A' && line[i]<='Z') line[i]+=32;
		cout << line << endl;
	}

	return 0;
}
