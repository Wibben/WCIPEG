#include <iostream>
#include <cctype>

using namespace std;

int main()
{
	char f;
	string line;
	int cnt=0;
	
	cin >> f; cin.ignore();
	getline(cin,line);
	
	f = toupper(f);
	
	for(int i=0; i<line.length(); i++)
		if(toupper(line[i])==f) cnt++;
	
	cout << line << endl << cnt << endl;

	return 0;
}
