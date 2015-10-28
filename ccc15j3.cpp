#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	string word;
	char vowel[5] = {'a','e','i','o','u'};

	cin >> word;

	for(int i=0; i<word.length(); i++) {
		if(word[i]=='a' || word[i]=='e' || word[i]=='i' || word[i]=='o' || word[i]=='u') cout << word[i];
		else {
			cout << word[i];

			int dist=26,low;
			for(int j=0; j<5; j++) {
				if(abs((int)(vowel[j]-word[i]))<dist) {
					dist = abs((int)(vowel[j]-word[i]));
					low = j;
				}
			}
			cout << vowel[low];

			if(word[i]=='z') cout << "z";
			else if ((char)(word[i]+1)=='a' || (char)(word[i]+1)=='e' || (char)(word[i]+1)=='i' || (char)(word[i]+1)=='o' || (char)(word[i]+1)=='u') cout << (char)(word[i]+2);
            else cout << (char)(word[i]+1);
		}
	}

	return 0;
}
