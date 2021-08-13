#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--){
		int n,x;
		cin >> n >> x;
		int arr[n];
		int sum = 0;
		for (int i = 0; i < n; ++i)
			cin>>arr[i];

		sort(arr, arr+n, greater<int>());

		if(n!=1){
			int pos=0;
			for (int i = 0; i < n; ++i)
			{
				sum += arr[i];
				if (sum > x)
				{
					pos = -1;
					break;
				}
				if (sum == x)
				 {
				 	pos = i;
				 	break;
				 } 
			}

			if (pos==-1)
			{
				cout<<"YES"<<endl;
				for (int i = 0; i < n; ++i)
				{
					cout<<arr[i]<<" ";
				}
				cout<<endl;
			}
			else if (pos!=n-1 && pos!=-1)
			{
				int temp = arr[pos];
				arr[pos]=arr[pos+1];
				arr[pos+1]= temp;
				cout<<"YES"<<endl;
				for (int i = 0; i < n; ++i)
				{
					cout<<arr[i]<<" ";
				}
				cout<<endl;
			}
			else{
				cout<<"NO"<<endl;
			}
		}
		else{
			if(arr[0]==x)
				cout<<"NO"<<endl;
			else
				cout<<"YES"<<endl<<arr[0]<<endl;
		}
	}
	return 0;
}
