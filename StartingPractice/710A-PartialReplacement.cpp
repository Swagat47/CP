#include <iostream>
#include <string>

using namespace std;

int main()
{
	int tc;
	cin >> tc;
	while(tc--){
		int l,k;
		string s;
		cin >> l >> k >> s;
		int start_pos=0, end_pos=l-1;

		for (int i = 0; i < l; ++i)
		{
			if (s[i]=='*')
			{
				s[i]=='X';
				start_pos = i;
				break;
			}
		}
		for (int i = 0; i < l; ++i)
		{
			if (s[n-i-1]=='*')
			{
				s[n-i-1]=='X';
				end_pos = n-i-1;
				break;
			}
		}

		for (int i = start_pos; i <= end_pos; ++i)
		{
			if(s[i]!='X')
				++c;
			if (c==k)
			{
				/* code */
			}
		}

	}
	return 0;
}