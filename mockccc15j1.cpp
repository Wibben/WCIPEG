#include <iostream>

using namespace std;

int main()
{
	string area,num;
	
	cin >> area >> num;
	
	if((area!="416" && area!="647" && area!="437") || num.length()!=7 || area.length()!=3) cout << "invalid" << endl;
	else if(area=="416" && num.length()==7) cout << "valuable" << endl;
	else cout << "valueless" << endl;

	return 0;
}
