#include <iostream>

using namespace std;

int main()
{
	int t,n;
	
	cin >> t;
	while(t--) {
		cin >> n;
		int sq[n][n];
		int sum=0;
		for(int i=0; i<n; i++) {
			for(int j=0; j<n; j++) 
				cin >> sq[i][j];
			sum+=sq[i][0];
		}
		
		int temprow,tempcol;
		for(int i=0; i<n; i++) {
			temprow = tempcol = 0;
			for(int j=0; j<n; j++) {
				temprow += sq[i][j];
				tempcol += sq[j][i];
			}
			if(temprow!=sum || tempcol!=sum) goto no;
		}
		
		cout << "yes" << endl;
		goto next;
		
		no:
		cout << "no" << endl;
		
		next:
		cin.ignore();
	}

	return 0;
}
