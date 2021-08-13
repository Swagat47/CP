#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		//vector<int> v;
		int arr[n];
		int a[n]={0};
		for (int i = 0; i < n; ++i)
		{
			cin>>arr[i];
		}
		
		sort(arr, arr+n);
		int c=n-1;
		cout<<arr[0]<<" ";
		
		while(c!=0){
			for (int i = 1; i < n; ++i)
			{
				if(a[i]==0){
					if(arr[i]!=arr[i-1]){
						c--;
						cout<<arr[i]<<" ";
						a[i]++;
					}	
				}
			}
		}
		cout<<endl;
	}

	return 0;
}