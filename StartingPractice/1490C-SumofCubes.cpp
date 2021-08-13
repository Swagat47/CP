#include <iostream>
#include <cmath>
#define ll long long 

using namespace std;

int bsearch(ll l, ll r, ll sv, ll int x){
	while(l<=r){
		ll mid = (l+r)/2;
		ll int value = pow(mid,3) + pow(sv,3);
		if(value == x)
			return 1;
		if(value < x){
			l=mid+1;
		}
		if (value>x)
			r=mid-1;
	}
	return 0;
}

int main()
{
	int tc;
	cin >> tc;
	while(tc--){
		ll int x;
		cin >> x;
		//cout<<x<<" ";
		ll sv = cbrt(x);
		ll half = (sv+1)/2;
		int ans = -1;
		while(sv>=1){
			ans=bsearch(1, sv, sv, x);{
				if(ans==1){
					cout<<"Yes"<<endl;
					break;
				}
			}
			sv--;
		}
		if(ans != 1)
			cout<<"No"<<endl;
	}
	return 0;
}