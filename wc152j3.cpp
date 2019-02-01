#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

class Trooper
{
  public:
	double x,y;
	int w;

	void setVal(double x, double y, int w)
	{
		this->x = x;
		this->y = y;
		this->w = w;
	}
	double distance(double x, double y)
	{
		return sqrt(pow(x-this->x,2)+pow(y-this->y,2));
	}
};

int main()
{
	int s,e,r;
	int danger = 0;
	double x,y,w;
	vector<Trooper> stormtroopers;

	cin >> s >> e >> r;

	while(s--) {
		cin >> w >> x >> y;
		Trooper t; t.setVal(x,y,w);
		stormtroopers.push_back(t);
	}

	while(e--) {
		int types=0;
		bool used[5] = {0,0,0,0,0};
		cin >> x >> y;

		for(int i=0; i<(int)stormtroopers.size(); i++) {
			if(stormtroopers[i].distance(x,y)<=r && !used[stormtroopers[i].w]) {
				used[stormtroopers[i].w] = 1;
				types++;
			}
		}

		if(types>1) danger++;
	}

	cout << danger << endl;

	return 0;
}
