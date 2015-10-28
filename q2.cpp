#include <iostream>

using namespace std;

int main()
{
	string name;
	int a = 0,other = 0;

	getline(cin,name);

	for(int i=0; i<name.length(); i++) {
        name[i] = tolower(name[i]);
		if(name[i]=='a') a++;
		else if(name[i]=='e' || name[i]=='i' || name[i]=='o' || name[i]=='u') other++;
	}

    if(a>=other) cout << "Advance to next round" << endl;
    else cout << "Does not advance to next round" << endl;

	return 0;
}
