#include <iostream>
#define ll long long
using namespace std;

int main()
{
	ll tc;
	cin >>tc;
	while(tc--){
		ll n;
		cin >> n;
		ll arr[n];
		ll sum =0;
		for (ll i = 0; i < n; ++i)
		{
			cin >> arr[i];
			sum += arr[i];
		}		
		if(sum <= n){
			cout<<sum*(n-sum)<<endl;
		}
		else if(sum % n==0){
			cout<<0<<endl;
		}
		else{
			ll t = sum%n;
			cout<<t*(n-t)<<endl;
		}
	}
	return 0;
}