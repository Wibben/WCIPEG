#include <iostream>

using namespace std;

int main()
{
	int m,x,time=0;
	char comm;
	int total[101],get[101];
	bool rep[101];

	fill(total,total+101,0);
	fill(rep,rep+101,1);

	cin >> m;
	while(m--) {
		cin >> comm >> x;
		if(comm=='R') {
			if(total[x]==0) total[x] = -1;
			get[x] = time;
			rep[x] = 0;
		} else if(comm=='S') {
			if(total[x]==-1) total[x] = 0;
			total[x]+=time-get[x];
			rep[x] = 1;
		} else if(comm=='W') time+=x-2;
		time++;
	}

	for(int i=1; i<101; i++)
		if(total[i]!=0) cout << i << " " << (rep[i] ? total[i]:-1) << endl;

	return 0;
}
