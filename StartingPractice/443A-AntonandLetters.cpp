#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
	string s;
	getline(cin, s);
	int arr[26] = {0};
	int count = 0;
	int  l = s.length();

	for (int i = 1; i < l; i=i+3)
	{
		char ch = s[i];
		if (arr[ch-97]!=1)
		{
			arr[ch-97]++;
		}
	}

	for (int i = 0; i < 26; ++i)
	{
		if (arr[i]==1)
		{
			++count;
		}
	}
	cout<<count;
	return 0;
}