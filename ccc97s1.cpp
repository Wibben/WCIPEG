#include <iostream>

using namespace std;

int main()
{
	int n,s,v,o;

	cin >> n;
	while(n--) {
		cin >> s >> v >> o;
		cin.ignore();
		string subject[s],verb[v],object[o];

		for(int i=0; i<s; i++)
			getline(cin,subject[i]);
		for(int i=0; i<v; i++)
			getline(cin,verb[i]);
		for(int i=0; i<o; i++)
			getline(cin,object[i]);

		for(int i=0; i<s; i++)
			for(int j=0; j<v; j++)
				for(int k=0; k<o; k++)
					cout << subject[i] << " " << verb[j] << " " << object[k] << ".\n";
	}

	return 0;
}
