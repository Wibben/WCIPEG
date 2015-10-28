#include <iostream>
#include <cctype>

using namespace std;

int main()
{
	int n;
	string a,b,c,d;

	cin >> n; cin.ignore();
	while(n--) {
		getline(cin,a);
		getline(cin,b);
		getline(cin,c);
		getline(cin,d);

		for(int i=a.length()-1; i>=0; i--) {
            a[i] = tolower(a[i]);
			if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' || a[i]==' ') {
				a = a.substr(i);
				break;
			}
		}
		for(int i=b.length()-1; i>=0; i--) {
            b[i] = tolower(b[i]);
			if(b[i]=='a' || b[i]=='e' || b[i]=='i' || b[i]=='o' || b[i]=='u' || b[i]==' ') {
				b = b.substr(i);
				break;
			}
		}
		for(int i=c.length()-1; i>=0; i--) {
            c[i] = tolower(c[i]);
			if(c[i]=='a' || c[i]=='e' || c[i]=='i' || c[i]=='o' || c[i]=='u' || c[i]==' ') {
				c = c.substr(i);
				break;
			}
		}
		for(int i=d.length()-1; i>=0; i--) {
            d[i] = tolower(d[i]);
			if(d[i]=='a' || d[i]=='e' || d[i]=='i' || d[i]=='o' || d[i]=='u' || d[i]==' ') {
				d = d.substr(i);
				break;
			}
		}
		
		if(a==b && b==c && c==d) cout << "perfect" << endl;
		else if(a==b && c==d) cout << "even" << endl;
		else if(a==c && b==d) cout << "cross" << endl;
		else if(a==d && b==c) cout << "shell" << endl;
		else cout << "free" << endl;
	}

	return 0;
}
