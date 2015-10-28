#include <iostream>
#include <vector>

using namespace std;

int main()
{
	string in;
	// 0 - clubs, 1 - diamonds, 2 - hearts, 3 - spades
	string out[4] = {"Clubs","Diamonds","Hearts","Spades"};
	vector<char> suits[4];
	int points[4] = {0,0,0,0},suit;
	
	cin >> in;
	
	for(int i=0; i<in.length(); i++) {
		if(toupper(in[i])=='C') suit = 0;
		else if(toupper(in[i])=='D') suit = 1;
		else if(toupper(in[i])=='H') suit = 2;
		else if(toupper(in[i])=='S') suit = 3;
		else {
			suits[suit].push_back(in[i]);
			if(toupper(in[i])=='A') points[i]+=4;
			else if(toupper(in[i])=='K') points[i]+=3;
			else if(toupper(in[i])=='Q') points[i]+=2;
			else if(toupper(in[i])=='J') points[i]+=1;
		}
	}
	
	for(int i=0; i<4; i++) {
		if(suits[i].size()==0) points[i]+=3;
		else if(suits[i].size()==1) points[i]+=2;
		else if(suits[i].size()==2) points[i]+=1;
	}
	
	cout << "Cards Dealt Points" << endl;
	for(int i=0; i<4; i++) {
		cout << out[i] << " ";
		for(int j=0; j<suits[i].size(); j++)
			cout << suits[i][j] << " ";
		cout << points[i] << endl;
	}
	cout << "Total " << points[0]+points[1]+points[2]+points[3] << endl;

	return 0;
}
