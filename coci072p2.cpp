#include <iostream>

using namespace std;

int main()
{
	int in;

	cin >> in;

	cout << (in%2==0 ? ((in/2)+1)*((in/2)+1):(in+1)/2*((in+1)/2+1)) << endl;

	return 0;
}
