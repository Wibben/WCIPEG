#include <iostream>
#include <stack>

using namespace std;

bool r(char a)
{
    return a=='R';
}

int main()
{
	stack<string> street;
	stack<char> dir;
	string s;
	char d;

	do {
		cin >> d >> s;
		dir.push(d);
		street.push(s);
	} while(s!="SCHOOL");

	street.pop();

	while(!street.empty()) {
		cout << "Turn " << (r(dir.top()) ? "LEFT":"RIGHT") << " onto " << street.top() << " street.\n";
		street.pop();
		dir.pop();
	}

	cout << "Turn " << (r(dir.top()) ? "LEFT":"RIGHT") << " into your HOME.\n";

	return 0;
}
