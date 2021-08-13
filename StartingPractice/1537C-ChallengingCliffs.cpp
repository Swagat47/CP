#include <iostream>
#include <climits>
#include <algorithm>
#define ll long long
using namespace std;

int main()
{
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		ll arr[n];
		for (int i = 0; i < n; ++i)
		{
			cin >> arr[i];
		}
		int min = INT_MAX;
		sort(arr,arr+n);
		int pos1=-1,pos2=-1;
		for (int i = 0; i < n-1; ++i)
		{
			int diff = arr[i+1]-arr[i];
			if(diff == 0){
				pos1 = i;
				pos2 = i+1;
				break;
			}
			if(diff<min){
				pos1 = i;
				pos2 = i+1;
				min = diff;
			}
		}
		//unordered_map<int, int> freq;
		int temp = arr[pos1];
		arr[pos1] = arr[0];
		arr[0] = temp;
		temp = arr[pos2];
		arr[pos2] = arr[n-1];
		arr[n-1] = temp;

		sort(arr+1,arr+n-1);

		if(arr[1]<arr[0] && n==4){
			int temp = arr[n-2];
			arr[n-2] = arr[1];
			arr[1] = temp;
		}
		for (int i = 0; i < n; ++i)
		{
			cout<<arr[i]<<" ";
		}
		cout<<endl;

	}
	return 0;
}