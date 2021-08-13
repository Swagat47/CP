#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
	string s;
	cin >> s;
	int l = s.length();

	string ss = "WUB";
	int count = 0, c=0;

	for (int i = 0; i < l; ++i)
	{
		if (i==0)
		{
			if(s.substr(i,3)==ss)
				i=i+2;
			else{
				c++;
				count = 0;
				cout<<s[i];
			}
		}
		else{
			if(s.substr(i,3)==ss){
				count++;
				i=i+2;
				if(count == 1 && c!=0)
					cout<<" ";
				c=0;
			}
			else{
				c++;
				count = 0;
				cout<<s[i];
			}
		}
		
	}
	return 0;
}