#include <iostream>
#define ll long long
using namespace std;

int main(int argc, char const *argv[])
{
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		ll sum = 0;
		ll count=0;
		cin >> n;
		int arr[n];
		for (int i = 0; i < n; ++i)
		{
			cin >> arr[i];
			sum += arr[i];
		}
		if (sum%n!=0)
		{
			cout<<-1<<endl;
			continue;
		}
		else{
			for (int i = 0; i < n; ++i)
			{
				if (arr[i]>(sum/n))
					count++;
			}
			cout<<count<<endl;
		}
	}
	return 0;
}