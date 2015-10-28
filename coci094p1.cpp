#include <iostream>

using namespace std;

int main()
{
	string in;

	cin >> in;

	for(int i=0; i<in.length(); i++)
		if(in[i]>='A' && in[i]<='Z') cout << in[i];
	cout << endl;

	return 0;
}
