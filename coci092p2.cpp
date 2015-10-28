#include <iostream>
#include <string>

using namespace std;

int main()
{
	string roman;

	cin >> roman;
    
    if(roman=="LXXI") roman = "XLIX";
    
	int found = roman.find("LX");
	if(found!=-1 && roman.find("LXX")==-1 && roman.find("LXXX")==-1) roman.replace(found,2,"XL");

	found = roman.find("XI");
	if(found!=-1 && roman.find("XII")==-1 && roman.find("XIII")==-1) roman.replace(found,2,"IX");

	found = roman.find("VI");
	if(found!=-1 && roman.find("VII")==-1 && roman.find("VIII")==-1) roman.replace(found,2,"IV");

	cout << roman << endl;

	return 0;
}
