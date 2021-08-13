#include <iostream>
#include <string>
using namespace std;

int main()
{
	int tc;
	cin>>tc;
	while(tc--){
		int n;
		cin >> n;
		string s;
		cin >> s;
		string s1 = s;
		if(reverseStr(s))
		cout<<"BOB"<<endl;
	}
	return 0;
}