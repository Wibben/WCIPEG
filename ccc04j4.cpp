#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	string key,word = "";
	char in;

	cin >> key;
	cin.ignore();
	in = getchar();
	while(in!='\n') {
		if(in>='A' && in<='Z') word+=in;
		in = getchar();
	}

    for(int i=0; i<word.length(); i++)
        word[i] = ((word[i]+key[i%key.length()]-'A'>'Z') ? word[i]+key[i%key.length()]-'A'-26 : word[i]+key[i%key.length()]-'A');

    cout << word << endl;

	return 0;
}
