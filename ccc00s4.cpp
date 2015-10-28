#include <iostream>

using namespace std;

int dist,num;
int club[32];
int di[5281];

void dfs(int d, int stroke)
{
    di[d] = stroke;
    if(d!=dist) {
		for(int i=0; i<num; i++)
			if(d+club[i] <= dist && stroke+1<di[d+club[i]]) dfs(d+club[i],stroke+1);
	}
}

int main()
{
	cin >> dist >> num;
	for(int i=0; i<num; i++)
		cin >> club[i];

    for(int i=0; i<=dist; i++)
        di[i] = 100000;

	dfs(0,0);

	if(di[dist]!=100000) cout << "Roberta wins in " << di[dist] << " strokes." << endl;
	else cout << "Roberta acknowledges defeat." << endl;

	return 0;
}
