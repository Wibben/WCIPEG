#include <iostream>
#include <queue>

using namespace std;

int flooring,r,c;
int room = 0;
string floorplan[25];
priority_queue<int> areas;

int findArea(int row, int col)
{
    if(row<0 || row>=r || col<0 || col>=c || floorplan[row][col]=='I') return 0;

    floorplan[row][col] = 'I';
	return 1+findArea(row+1,col)+findArea(row-1,col)+findArea(row,col+1)+findArea(row,col-1);
}

int main()
{
	cin >> flooring >> r >> c;
	cin.ignore();
	for(int i=0; i<r; i++)
		getline(cin,floorplan[i]);

	for(int i=0; i<r; i++)
		for(int j=0; j<c; j++)
			if(floorplan[i][j]=='.') areas.push(findArea(i,j));

    while(flooring>=areas.top() && !areas.empty()) {
        flooring -= areas.top();
        room++;
        areas.pop();
    }

    cout << room << (room==1 ? " room, ":" rooms, ") << flooring << " square metre(s) left over\n";

	return 0;
}
