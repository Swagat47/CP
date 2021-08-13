#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int tc;
	cin>>tc;
	while(tc--){
		int n;
		cin >> n;
		int arr[2*n];

		for (int i = 0; i < 2*n; ++i)
		{
			cin>>arr[i];
		}
		if((2*n)>2){
			sort(arr, arr+2*n);

			for (int i = 1; i < 2*n-1; ++i)
			{
				if (arr[i]==(arr[i-1]+arr[i+1])/2)
				{
					int temp = arr[i];
					arr[i]=arr[i+1];
					arr[i+1]=temp;
				}
				
			}

			if (arr[0]==(arr[n-1]+arr[1])/2)
			{
				int temp = arr[0];
				arr[0] = arr[n-1];
				arr[n-1] = temp;
			}
		}
		
		for (int i = 2*n-1; i >= 0; --i)
		{
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}