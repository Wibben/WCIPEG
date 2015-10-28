#include <iostream>

using namespace std;

int main()
{
	string in;

	do {
		getline(cin,in);

		if(in=="CU") cout << "see you" << endl;
		else if(in==")-)") cout << "I'm happy" << endl;
		else if(in==")-(") cout << "I'm unhappy" << endl;
		else if(in==";-)") cout << "wink" << endl;
		else if(in==")-P") cout << "stick out my tongue" << endl;
		else if(in=="(~.~)") cout << "sleepy" << endl;
		else if(in=="TA") cout << "totally awesome" << endl;
		else if(in=="CCC") cout << "Canadian Computing Competition" << endl;			
		else if(in=="CUZ") cout << "because" << endl;
		else if(in=="TY") cout << "thank-you" << endl;
		else if(in=="YW") cout << "you're welcome" << endl;
		else if(in=="TTYL") cout << "talk to you later" << endl;
		else cout << in << endl;
	} while(in!="TTYL");

	return 0;
}
