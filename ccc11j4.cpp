#include <iostream>
#include <string.h>

using namespace std;

int map[401][401];

void initialize()
{
	map[200][199] = map[200][198] = map[200][197] = map[201][197] = map[202][197] = map[203][197] = 1;
	map[203][196] = map[203][195] = map[204][195] = map[205][195] = map[205][196] = map[205][197] = 1;
	map[206][197] = map[207][197] = map[207][196] = map[207][195] = map[207][194] = map[207][193] = 1;
	map[206][193] = map[205][193] = map[204][193] = map[203][193] = map[202][193] = map[201][193] = 1;
	map[200][193] = map[199][193] = map[199][194] = map[199][195] = 1;
}

int main()
{
	memset(map, 0, sizeof(map));
	initialize();

    char d[4096];
	int n[4096],x,y,cnt = 0;
	bool danger = 0;

	x = 199; y = 195;

    cin >> d[cnt] >> n[cnt];
    cnt++;
	while(d[cnt]!='q') {
        cin >> d[cnt] >> n[cnt];
        cnt++;
	}
	for(int i=0; i<cnt; i++) {
		if(d[i] == 'l') {
			while(x>=0 && n[i]>0) {
				x--;
				if(map[x][y]==1) {danger = 1;}
				map[x][y] = 1;
				n[i]--;
			} cout << x - 200 << " " << y - 200 << endl;
			if(!danger) {
				cout << "safe" << endl;
			} else {
				cout << "DANGER" << endl;
				return 0;
			}
		} else if(d[i] == 'r') {
			while(x<=400 && n[i]>0) {
				x++;
				if(map[x][y]==1) {danger = 1;}
				map[x][y] = 1;
				n[i]--;
			} cout << x - 200 << " " << y - 200 << endl;
			if(!danger) {
				cout << "safe" << endl;
			} else {
				cout << "DANGER" << endl;
				return 0;
			}
		} else if(d[i] == 'd') {
			while(y>=0 && n[i]>0) {
				y--;
				if(map[x][y]==1) {danger = 1;}
				map[x][y] = 1;
				n[i]--;
			} cout << x - 200 << " " << y - 200 << endl;
			if(!danger) {
				cout << "safe" << endl;
			} else {
				cout << "DANGER" << endl;
				return 0;
			}
		} else if(d[i] == 'u') {
			while(y<0 && n[i]>0) {
				y++;
				if(map[x][y]==1) {danger = 1;}
				map[x][y] = 1;
				n[i]--;
			} cout << x - 200 << " " << y - 200 << endl;
			if(!danger) {
				cout << "safe" << endl;
			} else {
				cout << "DANGER" << endl;
				return 0;
			}
		}
	}

	return 0;
}