#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n;
	string s;
	cin >> n >> s;

	int l = s.length();
	int count = 0;
	for (int i = 0; i < l; ++i)
	{
		if(s[i]==65)
			++count;
		if (count > l/2)
		{
			break;
		}
	}

	if (n%2==0)
	{
		if (count == n/2)
			cout<<"Friendship";
		else if(count>l/2)
			cout<<"Anton";
		else if(count<l/2)
			cout<<"Danik";
	}
	else{
		if(count>l/2)
			cout<<"Anton";
		else
			cout<<"Danik";
	}
}