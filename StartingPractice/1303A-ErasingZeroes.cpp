#include <iostream>
#include <string>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--){
		string s;
		cin>>s;
		int l = s.length();
		int pos = 0, i = 0;

		for (i = 0; i < l; ++i)
		{
			if (s.at(i)=='1')
			{
				pos = i;
				break;
			}			
		}

		if (i==l)
		{
			cout<<0<<endl;
			continue;
		}

		int count = 0, sum = 0;

		for (i = pos+1; i < l; ++i)
		{

			if(s.at(i)=='0')
				count++;
			else
			{
				sum += count;
				count = 0;
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}