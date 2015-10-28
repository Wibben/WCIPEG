#include <iostream>

using namespace std;

int main()
{
	int t;
	string line;
	
	cin >> t; cin.ignore();
	while(t--) {
		int fir = 0;
		getline(cin,line);
		for(int i=0; i<line.length(); i++) {
			if(line[i]==' ') {
				fir = i+1;
				break;
			}
		}
		cout << fir << endl;
	}

	return 0;
}
