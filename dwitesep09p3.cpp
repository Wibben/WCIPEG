#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

class Point
{
  public:
    double x,y;

    void setVal(double x, double y)
    {
        this->x = x;
        this->y = y;
    }

    double slope(Point p)
    {
        return (p.y-y)/(p.x-x);
    }

    Point midpoint(Point p)
    {
        Point temp;
        temp.setVal((p.x+x)/2,(p.y+y)/2);
        return temp;
    }

    double yInt(double slope)
    {
        return y-slope*x;
    }
};

int main()
{
	Point p[3];
	double x,y;

	for(int i=0; i<5; i++) {
        for(int j=0; j<3; j++) {
            cin >> x >> y;
            p[j].setVal(x,y);
        }
        Point mid1 = p[0].midpoint(p[1]);
        Point mid2 = p[0].midpoint(p[2]);

        double slope1 = -1/p[0].slope(p[1]);
        double slope2 = -1/p[0].slope(p[2]);

        if(isinf(slope1)) x = mid1.x;
        else if(isinf(slope2)) x = mid2.x;
        else if(slope1-slope2==0) x = (mid1.x-mid2.x)/2;
        else x = (mid2.yInt(slope2)-mid1.yInt(slope1))/(slope1-slope2);

        y = slope1*x+mid1.yInt(slope1);

        printf("%.2f %.2f\n",x,y);
	}

	return 0;
}
