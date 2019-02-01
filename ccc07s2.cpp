#include <iostream>
#include <algorithm>

using namespace std;

int volume(int box[]) {return box[0]*box[1]*box[2];}

int main()
{
	int n,m;
	int obj[3];
	int offer[1000][3];

	cin >> n;
	for(int i=0; i<n; i++) {
		cin >> offer[i][0] >> offer[i][1] >> offer[i][2];
		sort(offer[i],offer[i]+3);
	}
	cin >> m;
	for(int i=0; i<m; i++) {
		cin >> obj[0] >> obj[1] >> obj[2];
		sort(obj,obj+3);

		int minvol = -1;
        for(int j=0; j<n; j++) {
            bool canfit = volume(offer[j]) >= volume(obj);

            for(int k=0; k<3 && canfit; k++)
                if(offer[j][k] < obj[k]) canfit = false;
            
            if(canfit && (minvol==-1 || minvol>volume(offer[j]))) minvol = volume(offer[j]);
        }

        if(minvol==-1) cout << "Item does not fit." << endl;
        else cout << minvol << endl;
	}

	return 0;
}
