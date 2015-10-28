#include <iostream>

using namespace std;

int convert(char roman)
{
	if(roman=='I') return 1;
	else if(roman=='V') return 5;
	else if(roman=='X') return 10;
	else if(roman=='L') return 50;
	else if(roman=='C') return 100;
	else if(roman=='D') return 500;
	else if(roman=='M') return 1000;
	else return roman - '0';
}

int main()
{
	string input;
	int arabic[15];
	int roman[15];
	int sum = 0;

    cin >> input;

    for(int i=0; i<input.length()/2; i++) {
        arabic[i] = convert(input[2*i]);
        roman[i] = convert(input[2*i+1]);
    }

    for(int i=0; i<input.length()/2 - 1; i++) {
        if(roman[i]<roman[i+1]) sum -= roman[i]*arabic[i];
        else sum += roman[i]*arabic[i];
    }
    sum += roman[input.length()/2-1]*arabic[input.length()/2-1];

    cout << sum << endl;

	return 0;
}
