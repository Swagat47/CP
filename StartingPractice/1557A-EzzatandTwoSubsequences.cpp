#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ll tc;
	cin >> tc;
	while(tc--){
		ll n;
		cin >> n;
		ll sum = 0, maxi = LONG_MIN;
		for (ll i = 0; i < n; ++i)
		{
			ll temp;
			cin >>temp;
			sum += temp;
			maxi = max(temp, maxi);
		}
		//cout<<sum<<" "<<max<<" ";
		double average = ((double)sum-maxi)/(n-1) + maxi;
		cout<<fixed<<setprecision(12)<<average<<setprecision(9)<<endl;
	}
	return 0;
}