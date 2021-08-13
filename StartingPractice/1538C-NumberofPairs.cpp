#include <iostream>
#include <algorithm>
#include <climits>
#include <unordered_set>

#define ll long long

using namespace std;

int main()
{
	int tc;
	cin >> tc;
	while(tc--){
		ll n, l, r;
		cin >>n>>l>>r;
		ll arr[n];
		int start=0, count=0;
		for (int i = 0; i < n; ++i)
		{
			cin >> arr[i];
		}
		sort(arr, arr+n);
	}
	return 0;
}