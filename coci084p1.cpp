#include <iostream>

using namespace std;

int main()
{
	int nums[5];

	for(int i=0; i<5; i++)
		cin >> nums[i];

	repeat:
	for(int i=0; i<4; i++) {
		if(nums[i]>nums[i+1]) {
			int temp = nums[i];
			nums[i] = nums[i+1];
			nums[i+1] = temp;
			for(int j=0; j<5; j++)
				cout << nums[j] << " ";
			cout << endl;
		}
	}
	if(nums[0]!=1 || nums[1]!=2 || nums[2]!=3 || nums[3]!=4) goto repeat;

	return 0;
}
