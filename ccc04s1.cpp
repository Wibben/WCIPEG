#include <iostream>
#include <algorithm>

using namespace std;

bool fixfree(string str[])
{
	string rev[3];

    for(int i=0; i<3; i++) {
        rev[i] = str[i];
        reverse(rev[i].begin(),rev[i].end());
    }

    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
            if(i!=j)
                if(str[i].find(str[j])==0 || rev[i].find(rev[j])==0) return false;

	return true;
}

int main()
{
	int n;
	string str[3];

	cin >> n;
	while(n--) {
		cin >> str[0] >> str[1] >> str[2];
		cout << (fixfree(str) ? "Yes":"No") << endl;
	}

	return 0;
}
