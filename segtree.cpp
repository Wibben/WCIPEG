#include <iostream>

using namespace std;

struct node {int l,r,m;} tree[300000];

int N,M;

void build(int l, int r, int rt)
{
	tree[rt].l = l; tree[rt].r = r;
	if(l==r) {
		cin >> tree[rt].m;
		return;
	}
	int mid = (l+r)/2;
	build(l,mid,2*rt);
	build(mid+1,r,2*rt+1);
	tree[rt].m = min(tree[2*rt].m,tree[2*rt+1].m);
}

void update(int pos, int val, int rt)
{
	if(tree[rt].l==tree[rt].r && tree[rt].l==pos) {
		tree[rt].m = val;
		return;
	}
	int mid = (tree[rt].l+tree[rt].r)/2;
	if(pos <= mid) update(pos,val,2*rt);
	else update(pos,val,2*rt+1);
	tree[rt].m = min(tree[2*rt].m,tree[2*rt+1].m);
}

int query(int l, int r, int rt)
{
	if(tree[rt].l==l && tree[rt].r==r) return tree[rt].m;
	int mid = (tree[rt].l+tree[rt].r)/2;
	if(r <= mid) return query(l,r,2*rt);
	else if(l > mid) return query(l,r,2*rt+1);
	else return min(query(l,mid,2*rt),query(mid+1,r,2*rt+1));
}

int main()
{
	cin >> N >> M;

	build(1,N,1);

	while(M--) {
		char ch;
		int a,b;
		cin >> ch >> a >> b;
		if(ch=='M') {
			a++;
			update(a,b,1);
		} else {
			a++; b++;
			cout << query(a,b,1) << endl;
		}
	}

	return 0;
}
