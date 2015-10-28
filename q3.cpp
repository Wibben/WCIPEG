#include <iostream>

using namespace std;

int main()
{
	int z,t,x,y,sum;
	
	cin >> z;
	int grid[z][z];
	for(int i=0; i<z; i++)
		for(int j=0; j<z; j++)
			cin >> grid[i][j];
	cin >> t;
	for(int i=0; i<t; i++) {
		cin >> x >> y;
		sum=0;
		
		for(int j=0; j<x; j++) 
			sum+=grid[x][j];
			
		for(int j=0; j<y; j++)
			sum+=grid[j][y];
		
		cout << sum << endl
	}
	
	return 0;
}
