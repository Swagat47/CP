#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

int main(){
	int tc;
	cin >> tc;
	int t=1;
	while(tc--){
		int n,b;
		cin >> n >>b;
		int arr[n];
		ll ts=0;
		for (int i = 0; i < n; ++i)
		{
			cin >> arr[i];
			ts += arr[i];
		}
		if (ts<=b)
		{
			cout<<"Case #"<<t<<": "<<n<<endl;
		}
		else{
			sort(arr, arr+n);
			int ans = 0;
			ll sum=0;
			for (int i = 0; i < n; ++i)
			{
				if (b>=arr[i])
				{
					ans++;
					b-=arr[i];
				}
				else{
					break;
				}
			}
			cout<<"Case #"<<t<<": "<<ans<<endl;
		}
		t++;
	}
	return 0;
}