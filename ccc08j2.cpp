#include <iostream>

using namespace std;

int main()
{
	int b,n;
	char playlist[5] = {'A','B','C','D','E'};

	cin >> b >> n;
	while(b!=4) {
		for(int i=0; i<n; i++) {
			if(b==1) {
				char temp = playlist[0];
				for(int j=0; j<4; j++)
					playlist[j] = playlist[j+1];
				playlist[4] = temp;
			} else if(b==2) {
				char temp = playlist[4];
				for(int j=4; j>0; j--)
					playlist[j] = playlist[j-1];
				playlist[0] = temp;
			} else if(b==3) {
				char temp = playlist[0];
				playlist[0] = playlist[1];
				playlist[1] = temp;
			}
		}
		cin >> b >> n;
	}

	for(int i=0; i<5; i++)
		cout << playlist[i] << " ";

	return 0;
}
