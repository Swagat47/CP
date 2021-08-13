#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
	int tc;
	cin >> tc;
	while(tc--){
		int l;
		cin >> l;
		string s;
		cin >> s;

		if(s.substr(0,4)=="2020"||s.substr(l-4,4)=="2020"||(s.substr(0,3)+s[l-1])=="2020"|| (s[0]+s.substr(l-3,3))=="2020"|| (s.substr(0,2)+s.substr(l-2,2))=="2020")
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}		

	return 0;
}