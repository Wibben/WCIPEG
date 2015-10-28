#include <iostream>

using namespace std;

int main()
{
	string in,out("000");

	cin >> in;

	int len = in.length()%3;

	out.replace(3-len,3,in);
	
	if(len==0) out = in;

	for(int i=0; i<out.length(); i+=3) {
		string temp = out.substr(i,3);
		if(temp=="000") cout << "0";
		if(temp=="001") cout << "1";
		if(temp=="010") cout << "2";
		if(temp=="011") cout << "3";
		if(temp=="100") cout << "4";
		if(temp=="101") cout << "5";
		if(temp=="110") cout << "6";
		if(temp=="111") cout << "7";
	} cout << endl;

	return 0;
}
