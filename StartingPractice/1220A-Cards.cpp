#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n;
	string s;
	cin >> n >> s;

	int count[5] = {0};

	for (int i = 0; i < n; ++i)
	{
		if (s.at(i)=='e')
		{
			count[0]++;
		}
		else if (s.at(i)=='n')
		{
			count[1]++;
		}
		else if (s.at(i)=='o')
		{
			count[2]++;
		}
		else if (s.at(i)=='r')
		{
			count[3]++;
		}
		else if (s.at(i)=='z')
		{
			count[4]++;
		}
	}

	int one = count[0];

	for (int i = 1; i < 3; ++i)
	{
		if (one>count[i])
		{
			one = count[i];
		}
	}

	count[0]-=one;
	count[1]-=one;
	count[2]-=one;

	int zero = count[0];

	for (int i = 2; i < 5; ++i)
	{
		if (zero > count[i])
		{
			zero = count[i];
		}
	}

	while(one != 0){
		cout<<"1 ";
		one--;
	}
	while(zero != 0){
		cout << "0 ";
		zero--;
	}
	return 0;
}