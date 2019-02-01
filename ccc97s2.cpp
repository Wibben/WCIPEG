#include <iostream>
#include <cmath>

using namespace std;

bool isNasty(int num)
{
	for(int i=1; i<=sqrt(num); i++) {
		for(;i<=sqrt(num) && num%i!=0; i++); // Find next factor
        if(i<=sqrt(num)) {
            int diff = num/i - i;

            for(int j=i+1; j<=sqrt(num); j++) {
                for(;j<=sqrt(num) && num%j!=0; j++); // Find next factor
                if(j<=sqrt(num) && (num/j+j)==diff) return true;
            }
        }
	}

	return false;
}

int main()
{
	int n,num;

	cin >> n;

	while(n--) {
		cin >> num;
		cout << num << (isNasty(num) ? " is nasty":" is not nasty") << endl;
	}

	return 0;
}
