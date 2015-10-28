#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	string out,in;
	int n;
	char c;

    out = "";

	cin >> n;
	for(int i=0; i<n; i++) {
		do {
			cin >> in;
			c = getchar();
			if(in.length()==4) {
				in = "****";
			}
			out = out+in+c;
		} while(c!='\n');

		out += '\n';
	}

    cout << out;

	return 0;
}
