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
		int c=0;
		
		int l = s.length();
		for (int i = 0; i < l; ++i)
			if (s[i]=='0')
				++c;

		if(c%4==0){
			cout<<"DRAW"<<endl;
			continue;
		}
		if((c+1)%4==0){
			cout<<"ALICE"<<endl;
			continue;
		}
		else
			cout<<"BOB"<<endl;
	}
	return 0;
}
