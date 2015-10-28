#include <iostream>

using namespace std;

int main()
{
	int m,n;
	
	cin >> m >> n;
	string adj[m],noun[n];
	for(int i=0; i<m; i++)
		cin >> adj[i];
	for(int i=0; i<n; i++)
		cin >> noun[i];
		
	for(int i=0; i<m; i++)
		for(int j=0; j<n; j++)
			cout << adj[i] << " as " << noun[j] << endl;
	
	return 0;
}
