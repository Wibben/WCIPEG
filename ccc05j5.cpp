#include <iostream>

using namespace std;

string word;

void shorten()
{
	if(word.find("ANA")!=string::npos) {
		int found = word.find("ANA");
		word[found] = 'A';
		for(int i=found+1; i<word.length(); i++) {
			word[i] = word[i+2];
		}
		cout << word << endl;
	} else if(word.find("BAS")!=string::npos) {
		int found = word.find("BAS");
		for(int i=found+1; i<word.length(); i++) {
			word[i] = word[i+2];
		}
		cout << word << endl;
	}
	
	if(word.find("ANA")!=string::npos || word.find("BAS")!=string::npos) shorten();
}

int main()
{
	cin >> word;
	while(word!="X") {
		shorten();
		cout << (word=="A" ? "YES":"NO") << endl;
		cin >> word;
	}

	return 0;
}
