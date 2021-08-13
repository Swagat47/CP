#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		int arr[n];
		int sum = 0;
		for (int i = 0; i < n; ++i)
		{
			cin >> arr[n];
			sum+=arr[n];
		}
		
		if(sum == n){
			cout<<0<<endl;
		}
		else if(sum < n){
			cout<<1<<endl;
		}
		else{
			cout<<sum-n<<endl;
		}

	}
	return 0;
}