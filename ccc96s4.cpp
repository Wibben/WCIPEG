#include <iostream>
#include <string>

using namespace std;

int romanToInt(string roman)
{
    for(int i=0; i<roman.length(); i++) {
        if(roman.substr(i,2)=="IV") {
            roman.replace(i,2,"IIII");
            i+=3;
        } else if(roman.substr(i,2)=="IX") {
            roman.replace(i,2,"VIIII");
            i+=4;
        } else if(roman.substr(i,2)=="XL") {
            roman.replace(i,2,"XXXX");
            i+=3;
        } else if(roman.substr(i,2)=="XC") {
            roman.replace(i,2,"LXXXX");
            i+=4;
        } else if(roman.substr(i,2)=="CD") {
            roman.replace(i,2,"CCCC");
            i+=3;
        } else if(roman.substr(i,2)=="CM") {
            roman.replace(i,2,"DCCCC");
            i+=4;
        }
    }

    int deci = 0;
    for(int i=0; i<roman.length(); i++) {
        if(roman[i]=='I') deci+=1;
        else if(roman[i]=='V') deci+=5;
        else if(roman[i]=='X') deci+=10;
        else if(roman[i]=='L') deci+=50;
        else if(roman[i]=='C') deci+=100;
        else if(roman[i]=='D') deci+=500;
        else if(roman[i]=='M') deci+=1000;
    }

    return deci;
}

string intToRoman(int n)
{
    if(n==1000) return "M";

    int one = n%10; n/=10;
    int ten = n%10; n/=10;
    int hundred = n%10;
    string roman = "";

    if(hundred==4) roman+="CD";
    else if(hundred==9) roman+="CM";
    else {
        if(hundred>=5) roman+='D';
        for(int i=0; i<hundred%5; i++)
            roman+='C';
    }

    if(ten==4) roman+="XL";
    else if(ten==9) roman+="XC";
    else {
        if(ten>=5) roman+='L';
        for(int i=0; i<ten%5; i++)
            roman+='X';
    }

    if(one==4) roman+="IV";
    else if(one==9) roman+="IX";
    else {
        if(one>=5) roman+='V';
        for(int i=0; i<one%5; i++)
            roman+='I';
    }

    return roman;
}

int main()
{
	int n;
	string expression;

	cin >> n;
	cin.ignore();
	while(n--) {
		getline(cin,expression);
		string first = expression.substr(0,expression.find('+'));
		string second = expression.substr(expression.find('+')+1);
		second = second.substr(0,second.length()-1);

		int a = romanToInt(first);
		int b = romanToInt(second);

		cout << expression << (a+b>1000 ? "CONCORDIA CUM VERITATE":intToRoman(a+b)) << endl;
	}

	return 0;
}
