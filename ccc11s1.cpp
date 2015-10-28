#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int l,s,t;
	string line;

    s = t = 0;

	cin >> l;
	for(int i=0; i<l; i++) {
		getline(cin,line);
		for(int j=0; j<line.length(); j++) {
			if(line[j]=='s' || line[j]=='S') {
				s++;
			} else if (line[j]=='t' || line[j]=='T') {
				t++;
			}
		}
		getchar();
	}

	if(t>s) {
		cout << "English" << endl;
	} else {
		cout << "French" << endl;
	}

	return 0;
}
