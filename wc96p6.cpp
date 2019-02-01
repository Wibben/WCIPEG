#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	long a,b,baseA,baseB,baseEnd;

	for(int i=0; i<5; i++) {
		cin >> a >> baseA >> b >> baseB >> baseEnd;

		long aTen,bTen,endTen;
		int j;

        aTen = j = 0;
		while(a>0) {
			aTen += (a%10)*pow(baseA,(double)j++);
			a/=10;
		}

		bTen = j = 0;
		while(b>0) {
			bTen += (b%10)*pow(baseB,(double)j++);
			b/=10;
		}

		endTen = aTen*bTen;

        string endNum = "";
        while(endTen>0) {
            endNum = (char)(endTen%baseEnd+'0') + endNum;
            endTen/=baseEnd;
        }

		cout << endNum << endl;
	}

	return 0;
}
