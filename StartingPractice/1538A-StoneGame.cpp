#include <iostream>
#include <climits>

using namespace std;

int main()
{
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		int arr[n];
		int max = 0;
		int min = INT_MAX;
		int min_pos = 0;
		int max_pos = 0;
		for (int i = 0; i < n; ++i)
		{
			cin >> arr[i];
			if (arr[i]>max)
			{
				max_pos = i;
				max = arr[i];
			}
			if (arr[i]<=min)
			{
				min_pos = i;
				min = arr[i];
			}
		}
	
		int min1 = (min_pos<max_pos)? min_pos:max_pos;
		int max1 = (max_pos>min_pos)?max_pos:min_pos;
		int ans1 = min1+1 + n-max1;

		int ans2 = (max1+1 < n-min1)? max1+1:n-min1;
		int ans = (ans1<ans2)?ans1:ans2;
		cout<<ans<<endl;
		
	}
	return 0;
}