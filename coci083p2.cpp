#include <iostream>

using namespace std;

int main()
{
	string code,decode = "";

	getline(cin,code);
	for(int i=0; i<code.length(); i++) {
		decode += code[i];
		if(code[i]=='a' || code[i]=='e' || code[i]=='i' || code[i]=='o' || code[i]=='u') i+=2;
	}
	cout << decode << endl;

	return 0;
}
