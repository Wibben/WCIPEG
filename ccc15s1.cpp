#include <iostream>
#include <stack>

using namespace std;

int main()
{
	stack<int> nums;
	int sum = 0;
	int k,in;
	
	cin >> k;
	
	for(int i=0; i<k; i++) {
		cin >> in;
		if(in==0 && !nums.empty()) nums.pop();
		else nums.push(in);
	}
	
	while(!nums.empty()) {
		sum += nums.top();
		nums.pop();
	}
	
	cout << sum << endl;
	
	return 0;
}
