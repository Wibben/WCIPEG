#include <iostream>

using namespace std;

int main()
{
	string mom,dad,baby,potential;
	int n;

	cin >> mom >> dad >> n;

	potential = "";
	for(int i=0; i<10; i+=2) {
		int momcap,dadcap;
		momcap = dadcap = 0;
		for(int j=i; j<=i+1; j++) {
            if(mom[j]<'a') momcap++;
            if(dad[j]<'a') dadcap++;
		}
		if(momcap==2) potential += mom[i];
		else if(dadcap==2) potential += dad[i];
		else if(momcap==0 && dadcap==0) potential += mom[i];
		else if(momcap==1) potential += mom.substr(i,2);
		else potential += dad.substr(i,2);
	}

	while(n--) {
		cin >> baby;
		bool maybe = true;
		for(int i=0; i<5; i++) {
			if(potential.find(baby[i])==string::npos) maybe = false;
		}

		cout << (maybe ? "Possible baby.":"Not their baby!") << endl;
	}

	return 0;
}
