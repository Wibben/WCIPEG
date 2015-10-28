#include <iostream>

using namespace std;

int main()
{
	int t,undefeated,oneloss,eliminated;

	cin >> t;
	for(int i=0; i<t; i++) {
		cin >> undefeated;
		cout << "Round 0: " << undefeated << " undefeated, 0 one-loss, 0 eliminated" << endl;

        oneloss = eliminated = 0;

		int round = 1;
		while(undefeated+oneloss>1) {
			if(undefeated==1 && oneloss==1) {
				oneloss++;
				undefeated--;
			} else {
				eliminated += oneloss/2;
				oneloss += undefeated/2-oneloss/2;
				undefeated -= undefeated/2;
			}
			cout << "Round " << round++ << ": " << undefeated << " undefeated, " << oneloss << " one-loss, " << eliminated << " eliminated" << endl;
		}
		cout << "There are " << round-1 << " rounds." << endl;
	}

	return 0;
}
