#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <iomanip>
#define ll long long

using namespace std;

int main(int argc, char const *argv[])
{
	ll n, l;
	cin >>n>>l;
	vector<ll> pos;

	for (int i = 0; i < n; ++i)
	{
		int temp;
		cin >> temp;
		pos.push_back(temp);
	}

	sort(pos.begin(), pos.end());
	double max =0;
	//cout<<pos;
	for (int i = 0; i < n-1; ++i)
	{
		if (max<(pos[i+1]-pos[i]))
		{
			max = pos[i+1]-pos[i];
		}	
	}
	max/=2;
	cout<<setprecision(10)<<fixed;
	if (pos[0]!=0)
	{
		if (max < pos[0])
			max = pos[0];
	}
	if (max < l-pos[n-1])
	{
		max = l-pos[n-1];
	}

	cout<<max;
	
	return 0;
}