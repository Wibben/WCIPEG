#include <iostream>

using namespace std;

int main()
{
	int n;
	string num;

	cin >> n;
	while(n--) {
		cin >> num;
		string temp = num;

		cout << temp << endl;
		while(temp.length()>2) {
			int last = (int)(temp[temp.length()-1]-'0');
			temp = temp.substr(0,temp.length()-1);

			temp[temp.length()-1] -= last;

			for(int i=temp.length()-1; i>=0; i--) {
				if(temp[i]<'0') {
					temp[i]+=10;
					temp[i-1]-=1;
				}
			}

			for(int i=0; i<temp.length(); i++) {
				if(temp[i]!='0') {
					temp = temp.substr(i);
					i = temp.length();
				}
			}

			cout << temp << endl;
		}

		cout << "The number " << num << (temp[0]==temp[1] ? " is ":" is not ") << "divisible by 11." << endl << endl;
	}

	return 0;
}
