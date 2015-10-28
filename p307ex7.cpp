#include <iostream>

using namespace std;

int main()
{
	int mark,n;
	
	cin >> n;
	
	for(int i=0; i<n; i++) {
		cin >> mark;
		if(mark<=100 && mark>79) cout << "A" << endl;
		else if(mark<80 && mark>69) cout << "B" << endl;
		else if(mark<70 && mark>59) cout << "C" << endl;
		else if(mark<60 && mark>49) cout << "D" << endl;
		else if(mark<50 && mark>=0) cout << "F" << endl;
		else cout << "X" << endl;
	}

	return 0;
}
