#include <iostream>

using namespace std;

int main()
{
	int l;
	string out,in;

    out = "";

	cin >> l;
	for(int i=l; i>-1; i--) {
		getline(cin,in);
		if(i%2==0) {
			for(int j=in.length()-1; j>=0; j--) {
				if(in[j]!=' ') {
					out = in[j] + out;
				}
			}
		} else {
			for(int j=0; j<in.length(); j++) {
				if(in[j]!=' ') {
					out = in[j] + out;
				}
			}
		}
	}

	cout << out << endl;;

	return 0;
}
