#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int in[3];

	for(int i=0; i<3; i++)
		cin >> in[i];

	sort(in,in+3);

	if(in[1]-in[0]==in[2]-in[1]) cout << in[1]-in[0]+in[2] << endl;
	else if(in[1]-in[0]>in[2]-in[1]) cout << (in[1]+in[0])/2 << endl;
	else if(in[1]-in[0]<in[2]-in[1]) cout << (in[1]+in[2])/2 << endl;

	return 0;
}
