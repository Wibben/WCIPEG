#include <iostream>

using namespace std;

int main()
{
	int c,n;
	int test[10000],key[10000];
	
	cin >> n;
	for(int i=0; i<n; i++)
		cin >> test[i];
	for(int i=0; i<n; i++)
		cin >> key[i];
		
	c = 0;
	for(i=0; i<n; i++) {
		if(test[i]==key[i]) {
			c++;
		}
	}
	
	cout << c << endl;
	
	return 0;
}