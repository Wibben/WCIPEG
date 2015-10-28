#include <iostream>

using namespace std;

int main()
{
	int happy=0,sad=0;
	string line;

	getline(cin,line);

	for(int i=0; i<line.length()-2; i++) {
		if(line.substr(i,3)==":-)") happy++;
		else if(line.substr(i,3)==":-(") sad++;
	}

	if(happy==0 && sad==0) cout << "none" << endl;
	else if(happy==sad) cout << "unsure" << endl;
	else if(happy>sad) cout << "happy" << endl;
	else if(happy<sad) cout << "sad" << endl;

	return 0;
}
