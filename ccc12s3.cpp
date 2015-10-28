#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

int main()
{
    int n,r,first=0,second=0;
    int occur[1001];

    for(int i=0; i<1001; i++)
        occur[i] = 0;

    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> r;
        occur[r]++;
        if(occur[r]>occur[first]) {
            if(occur[first]>occur[second] || abs(r-first)>abs(r-second)) second = first;

            first = r;
        } else if(occur[r]==occur[first] && r!=first && r!=second) {
            if(occur[first]>occur[second]) {
                second = min(r,first);
                first = max(r,first);
            } else {
                first = max(r,max(first,second));
                second = min(r,min(first,second));
            }
        } else if(occur[r]>occur[second] && r!=first) second = r;
        else if(occur[r]==occur[second] && abs(first-r)>abs(first-second) && r!=first) second = r;
    }

    cout << abs(first-second) << endl;

	return 0;
}
