#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	int tc;
	cin >> tc;
	while(tc--){
		map<ll, ll> mp;
		ll n, k;
		cin >> n >> k;
		ll arr[n];
		ll c=1;
		for (ll i = 0; i < n; ++i)
		{
			cin >> arr[i];
			mp[arr[i]]++;
		}
		for (ll i = 0; i < n-1; ++i)
		{
			//auto it = mp.upper_bound(arr[i]);
			if(arr[i+1]>arr[i] && (*mp.upper_bound(arr[i])).first==arr[i+1])
				continue;
			else
				++c;
		}
		//cout<<c<<" ";
		if (c<=k)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}