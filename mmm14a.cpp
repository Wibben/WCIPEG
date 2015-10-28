#include <iostream>
#include <vector>
#include <cmath>
#include <cstdio>

using namespace std;

int main()
{
    ios_base::sync_with_stdio (false);

	vector<int> primes,distinct;
	int a,b;

	primes.push_back(2);

	cin >> a >> b;

	distinct.assign(b+1,0);

	int cur = 2;
	for(int i=2; i<=b; i++) {
        if(a%cur==0) distinct[0]++;
        for(int j=cur; j<=b; j+=cur)
            distinct[j]++;
        for(int j=cur+1; j<=b; j++) {
            if(distinct[j]==0) {
                cur = j;
                break;
            }
            if(j==b) goto output;
        }
	}

    output:
	for(int i=a; i<=b; i++)
        printf("%d\n", distinct[i]);

	return 0;
}
