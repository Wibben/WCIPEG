#include <iostream>

using namespace std;

int main()
{
	string card;
	bool aturn = 1;
	bool ace,king,queen,jack;
	int cnt,apoint,bpoint;
	cnt = apoint = bpoint = 0;
	ace = king = queen = jack = 0;

	for(int i=0; i<52; i++) {
		cin >> card;
		if(card=="ace") {
			cnt=0;
			ace = king = queen = jack = 0;
			ace = true;
		} else if(card=="king") {
			cnt=0;
			ace = king = queen = jack = 0;
			king = true;
		} else if(card=="queen") {
			cnt=0;
			ace = king = queen = jack = 0;
			queen = true;
		} else if(card=="jack") {
			cnt=0;
			ace = king = queen = jack = 0;
			jack = true;
		} else  {
			if(ace || king || queen || jack) cnt++;
			if(ace && cnt==4) {
				ace = 0;
				cnt = 0;
				if(aturn) {
					cout << "Player A scores 4 point(s).\n";
					apoint+=4;
				} else {
					cout << "Player B scores 4 point(s).\n";
					bpoint+=4;
				}
			} else if(king && cnt==3) {
				king = 0;
				cnt = 0;
				if(!aturn) {
					cout << "Player A scores 3 point(s).\n";
					apoint+=3;
				} else {
					cout << "Player B scores 3 point(s).\n";
					bpoint+=3;
				}
			} else if(queen && cnt==2) {
				queen = 0;
				cnt = 0;
				if(aturn) {
					cout << "Player A scores 2 point(s).\n";
					apoint+=2;
				} else {
					cout << "Player B scores 2 point(s).\n";
					bpoint+=2;
				}
			} else if(jack && cnt==1) {
				jack = 0;
				cnt = 0;
				if(!aturn) {
					cout << "Player A scores 1 point(s).\n";
					apoint+=1;
				} else {
					cout << "Player B scores 1 point(s).\n";
					bpoint+=1;
				}
			}
		}

		aturn = !aturn;
	}

	cout << "Player A: " << apoint << " point(s).\n";
	cout << "Player B: " << bpoint << " point(s).\n";

	return 0;
}
