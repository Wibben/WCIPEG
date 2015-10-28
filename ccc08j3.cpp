#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	string waypoint;
	int crow=0,ccol=0,press=0;
	
	getline(cin,waypoint);
	
	for(int i=0; i<waypoint.length(); i++) {
		int row=4,col;
		if(waypoint[i]==' ') col = 2;
		else if(waypoint[i]=='-') col = 3;
		else if(waypoint[i]=='.') col = 4;
		else {
			row = (int)(waypoint[i]-'A')/6;
			col = (int)(waypoint[i]-'A')%6;
		}
		
		press += abs(crow-row)+abs(ccol-col);
		crow = row;
		ccol = col;
	}
	press+=abs(crow-4)+abs(ccol-5);
	
	cout << press << endl;

	return 0;
}
