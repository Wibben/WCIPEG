#include <iostream>

using namespace std;

int main()
{
	int highscore=0,highcon;
	
	for(int i=1; i<=5; i++) {
		int cur = 0,score;
		for(int j=0; j<4; j++) {
			cin >> score;
			cur+=score;
		}
		if(cur>highscore) {
			highscore = cur;
			highcon = i;
		}
	}
	
	cout << highcon << " " << highscore << endl;

	return 0;
}
