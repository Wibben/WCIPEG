#include <iostream>

using namespace std;

int main()
{
	int n,d,cnt=0;
	bool uniq[1001] = {false};

	cin >> n;
	while(n--) {
		cin >> d;
		if(!uniq[d]) {
			uniq[d] = 1;
			cnt++;
		}
	}

	cout << cnt << endl;

	return 0;
}
