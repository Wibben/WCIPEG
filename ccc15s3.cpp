#include <iostream>

using namespace std;

int main()
{
	int g,p,plane,num=0;
	bool dock[100001];
	
	cin >> g >> p;
	
	for(int i=1; i<=100001; i++) dock[i]=false;
	
	for(int i=0; i<p; i++) {
		cin >> plane;
		for(int j=plane; j>=0; j--) {
            if(j==0) {
				cout << num << endl;
				return 0;
			}
			if(!dock[j]) {
				dock[j] = true;
				num++;
				break;
			}
		}
	}
	
	cout << num << endl;
	
	return 0;
}
