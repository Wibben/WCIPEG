#include <iostream>

using namespace std;

int main()
{
	int n,d,h,s;
	int x,y,time;

	x = y = time = 0;

	cin >> n;
	for(int i=0; i<n; i++) {
		cin >> d >> h >> s;
		int startx = x;
		int starty = y;
		if(d==12) y+=h*s;
		else if(d==9) x-=h*s;
		else if(d==6) y-=h*s;
		else if(d==3) x+=h*s;
		time+=h;
		if(x==0 && starty>0 && y<=0) {cout << ((time+y/s)%5==0 ? (time+y/s)/5-1:(time+y/s)/5) << endl; return 0;}
		else if(x==0 && starty<0 && y>=0) {cout << ((time-y/s)%5==0 ? (time-y/s)/5-1:(time-y/s)/5) << endl; return 0;}
		else if(y==0 && startx>0 && x<=0) {cout << ((time+x/s)%5==0 ? (time+x/s)/5-1:(time+x/s)/5) << endl; return 0;}
		else if(y==0 && startx<0 && x>=0) {cout << ((time-x/s)%5==0 ? (time-x/s)/5-1:(time-x/s)/5) << endl; return 0;}
	}

    cout << -1 << endl;

	return 0;
}
