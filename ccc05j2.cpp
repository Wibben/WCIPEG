#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int min,max,rsa=0;
	
	cin >> min >> max;
	
	for(int i=min; i<=max; i++) {
		int div = 0;
		for(int j=1; j<=sqrt(i); j++)
			if(i%j==0) div += (i/j==j)?1:2;
		if(div==4) rsa++;
	}
	
	cout << "The number of RSA numbers between " << min << " and " << max << " is " << rsa << endl;
	
	return 0;
}
