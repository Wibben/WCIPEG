#include <iostream>
#include <string>

using namespace std;

int main()
{
	string ori,mod;

    for(int i=0; i<5; i++) {
        mod="";
        getline(cin,ori);
        for(int i=0; i<ori.length(); i++)
            if(tolower(ori[i])>='a' && tolower(ori[i])<='z') mod+=tolower(ori[i]);

        if(mod.find("pei")!=string::npos) cout << "PEI" << endl;
        else if(mod.find("saskatchewan")!=string::npos) cout << "Saskatchewan" << endl;
        else if(mod.find("ontario")!=string::npos) cout << "Ontario" << endl;
        else if(mod.find("manitoba")!=string::npos) cout << "Manitoba" << endl;
        else if(mod.find("newbrunswick")!=string::npos) cout << "New Brunswick" << endl;
        else if(mod.find("newfoundland")!=string::npos) cout << "Newfoundland" << endl;
        else if(mod.find("novascotia")!=string::npos) cout << "Nova Scotia" << endl;
        else if(mod.find("britishcolumbia")!=string::npos) cout << "British Columbia" << endl;
        else if(mod.find("alberta")!=string::npos) cout << "Alberta" << endl;
        else if(mod.find("quebec")!=string::npos) cout << "Quebec" << endl;
        else cout << "NO PROVINCE FOUND" << endl;
    }

	return 0;
}
