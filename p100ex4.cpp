#include <iostream>

using namespace std;

int main()
{
	string code;
	
	cin >> code;
	if(code=="MG") cout << "midget girls\n";
	else if(code=="MB") cout << "midget boys\n";
	else if(code=="JG") cout << "junior girls\n";
	else if(code=="JB") cout << "junior boys\n";
	else if(code=="SG") cout << "senior girls\n";
	else if(code=="SB") cout << "senior boys\n";
	else cout << "invalid code\n";

	return 0;
}
