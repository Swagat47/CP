#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	int t;
	cin>>t;
	for (int i = 0; i < t; ++i)
	{
		int n;
		string s;
		cin>>n>>s;

		for (int i = 0; i < 2*n-1; i=i+2)
		{
			cout<<s[i];
		}
		
		cout<<endl;
	}
	return 0;
}