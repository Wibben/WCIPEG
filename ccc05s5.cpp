#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

int n,r[100002],tree[100002];
pair<int, int> s[100002];
double ans;

bool cmp(pair<int,int> x, pair<int,int> y) {return x.first>y.first;}
inline int lowbit(int x) {return x&(-x);}

void update(int x, int val)
{
	for(; x<=n; x+=lowbit(x))
		tree[x] += val;
}

double sum(int x)
{
	double ans = 0;
	for(; x>0; x-=lowbit(x))
		ans+=tree[x];
	return ans;
}

int main()
{
	cin >> n;
	for(int i=1; i<=n; i++) {
		cin >> s[i].first;
		s[i].second = i;
	}
	sort(s+1,s+n+1,cmp);

	for(int i=1; i<=n; i++)
		r[s[i].second] = i;

	for(int i=1; i<=n; i++) {
		ans += sum(r[i])+1;
		update(r[i],1);
	}
    
	cout << fixed << setprecision(2) << ans/n << endl;

	return 0;
}
