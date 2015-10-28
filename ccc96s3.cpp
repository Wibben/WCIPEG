#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int reads,n,k;

	cin >> reads;
	while(reads--) {
		cin >> n >> k;
		cout << "The bit patterns are\n";

		string bits,rev;
		bits = "";

		// Constructing initial string
		for(int i=0; i<k; i++)
			bits+='1';
		for(int i=0; i<n-k; i++)
			bits+='0';

        cout << bits << endl;

		for(int i=bits.length()-2; i>=0; i--) {
			if(bits.substr(i,2)=="10") {
                rev = "";
				bits[i] = '0';
				bits[i+1] = '1';
				for(int j=bits.length()-1; j>i+1; j--) {
                    rev += bits[j];
				}
				bits = bits.substr(0,i+2) + rev;
				i = bits.length()-1;
                cout << bits << endl;
			}
		}

		cout << endl;
	}

	return 0;
}
