#include <iostream>

using namespace std;

int main()
{
	string notes;
	
	getline(cin,notes);
	
	if(notes=="1 2 3 4 5 6 7 8") cout << "ascending" << endl;
	else if(notes=="8 7 6 5 4 3 2 1") cout << "descending" << endl;
	else cout << "mixed" << endl;
	
	return 0;
}
