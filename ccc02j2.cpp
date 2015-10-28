#include <iostream>

using namespace std;

int main()
{
	string word;

	cin >> word;
	while(word!="quit!") {
		int l = word.length();
		if(l>=4 && word.substr(l-2)=="or" && word[l-3]!='a' && word[l-3]!='e' && word[l-3]!='i' && word[l-3]!='o' && word[l-3]!='u' && word[l-3]!='y')
			cout << word.substr(0,l-2) << "our" << endl;
		else cout << word << endl;
		cin >> word;
	}

	return 0;
}
