#include <iostream>
#include <cstring>
//#include <algorithm>

using namespace std;

int main(){
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		string a = "";
		string b;
		cin >> b;

		for (int j = 0; j < b.size(); j=j+2)
		{
			a += b.at(j);
		}
		a += b.at(b.size()-1);
		cout<<a<<endl;
	}
	return 0;
	
}