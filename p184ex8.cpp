#include <iostream>

using namespace std;

int main()
{
	int votes[7] = {0,0,0,0,0,0,0},n;
	char c;
	
	cin >> n;
	while(n--) {
		cin >> c;
		
		if(c>='A'&&c<='F') votes[(int)(c-'A')]++;
		else votes[6]++;
	}
	
	for(int i=0; i<7; i++)
		cout << votes[i] << endl;

	return 0;
}
