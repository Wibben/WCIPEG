#include <iostream>

using namespace std;

int main()
{
	int t;
	string number;

	cin >> t;
	cin.ignore();
	while(t--) {
		string out = "";
		getline(cin,number);
		for(int i=0; i<number.length(); i++) {
			if(number[i]>='0' && number[i]<='9') out += number[i];
			else if(number[i]>='A' && number[i]<='C') out += '2';
			else if(number[i]>='D' && number[i]<='F') out += '3';
			else if(number[i]>='G' && number[i]<='I') out += '4';
			else if(number[i]>='J' && number[i]<='L') out += '5';
			else if(number[i]>='M' && number[i]<='O') out += '6';
			else if(number[i]>='P' && number[i]<='S') out += '7';
			else if(number[i]>='T' && number[i]<='V') out += '8';
			else if(number[i]>='W' && number[i]<='Z') out += '9';
		}
		cout << out.substr(0,3) << "-" << out.substr(3,3) << "-" << out.substr(6,4) << endl;
	}

	return 0;
}
