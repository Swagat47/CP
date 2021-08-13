#include <iostream>

#define ll long long

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		ll arr[n];
		ll a[n];
		for (int i = 0; i < n; ++i)
		{
			cin >> arr[i];
			a[n-i-1] = arr[i];
		}
		int count = 0;

		for (int i = 0; i < n-1; ++i)
		{
			if(i==n-2 && (arr[i]==arr[n-1] || a[i]==a[n-1])){
				cout<<"YES"<<endl;
				break;
			}
			arr[i] = arr[i]^arr[i+1];
			a[i] = a[i]^a[i+1];
			
			if (i>0)
			{	
				if(arr[i]!=arr[i-1] || arr[i]!=arr[n-1] || a[i]!=a[i-1] || a[i]!=a[n-1]){
					cout<<"NO"<<endl;
					break;
				}
				else
					count++;
			}
		}
		if (count == n-2  && (arr[n-2]==arr[n-1]||a[n-2]==a[n-1]))
		{
			cout<<"YES"<<endl;
		}
	}
}