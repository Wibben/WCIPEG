#include <iostream>

using namespace std;

int main()
{
	string months[] = {"","January","February","March","April","May","June","July","August","September","October","November","December"};
	int n;
	string in;

	cin >> n;
	cin.ignore();
	while(n--) {
		getline(cin,in);
		in = " " + in + " ";
		int day,month,year;

		for(int i=1; i<in.length()-1; i++) {
            // dd/mm/yy
            if(i<in.length()-8 && in[i+2]=='/' && in[i+5]=='/' &&
               (in[i-1]<'0' || (in[i-1]>'9' && in[i-1]<'A') || (in[i-1]>'Z' && in[i-1]<'a') || in[i-1]>'z') &&
               (in[i+8]<'0' || (in[i+8]>'9' && in[i+8]<'A') || (in[i+8]>'Z' && in[i+8]<'a') || in[i+8]>'z') &&
               in[i+1]>='0' && in[i+1]<='9' && in[i+4]>='0' && in[i+4]<='9' && in[i+7]>='0' && in[i+7]<='9') {
                day = (int)(in[i]-'0')*10 + (int)(in[i+1]-'0');
                month = (int)(in[i+3]-'0')*10 + (int)(in[i+4]-'0');
                year = (int)(in[i+6]-'0')*10 + (int)(in[i+7]-'0');

                if(day>0 && day<=31 && month>0 && month<=12 && year>=0 && year<=99) {
                    if(year<25) in = in.substr(0,i+6)+"20"+in.substr(i+6);
                    else in = in.substr(0,i+6)+"19"+in.substr(i+6);
                }
            }

            // yy.mm.dd
            if(i<in.length()-8 && in[i+2]=='.' && in[i+5]=='.' &&
               (in[i-1]<'0' || (in[i-1]>'9' && in[i-1]<'A') || (in[i-1]>'Z' && in[i-1]<'a') || in[i-1]>'z') &&
               (in[i+8]<'0' || (in[i+8]>'9' && in[i+8]<'A') || (in[i+8]>'Z' && in[i+8]<'a') || in[i+8]>'z') &&
               in[i+1]>='0' && in[i+1]<='9' && in[i+4]>='0' && in[i+4]<='9' && in[i+7]>='0' && in[i+7]<='9') {
                year = (int)(in[i]-'0')*10 + (int)(in[i+1]-'0');
                month = (int)(in[i+3]-'0')*10 + (int)(in[i+4]-'0');
                day = (int)(in[i+6]-'0')*10 + (int)(in[i+7]-'0');

                if(day>0 && day<=31 && month>0 && month<=12 && year>=0 && year<=99) {
                    if(year<25) cout << "20";
                    else cout << "19";
                }
            }

            // Month dd, yy
            for(int j=1; j<=12; j++) {
                int l = months[j].length();
                if(i<in.length()-(l+7) && in.substr(i,l)==months[j] && in[i+l]==' ' && in.substr(i+l+3,2)==", " &&
                   (in[i-1]<'0' || (in[i-1]>'9' && in[i-1]<'A') || (in[i-1]>'Z' && in[i-1]<'a') || in[i-1]>'z') &&
                   (in[i+l+7]<'0' || (in[i+l+7]>'9' && in[i+l+7]<'A') || (in[i+l+7]>'Z' && in[i+l+7]<'a') || in[i+l+7]>'z') &&
                   in[i+l+2]>='0' && in[i+l+2]<='9' && in[i+l+6]>='0' && in[i+l+6]<='9') {
                    day = (int)(in[i+l+1]-'0')*10 + (int)(in[i+l+2]-'0');
                    year = (int)(in[i+l+5]-'0')*10 + (int)(in[i+l+6]-'0');

                    if(day>0 && day<=31 && year>=0 && year<=99) {
                        if(year<25) in = in.substr(0,i+l+5)+"20"+in.substr(i+l+5);
                        else in = in.substr(0,i+l+5)+"19"+in.substr(i+l+5);
                    }
                }
            }

            cout << in[i];
		}
		cout << endl;
	}

	return 0;
}
