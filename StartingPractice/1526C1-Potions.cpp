#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int arr[n];
	int pos_sum=0;
	int neg_sum=0;
	int count=0;
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
		if (arr[i]<0)
			neg_sum+=arr[i];
		else{
			pos_sum+=arr[i];
		}
	}
	if (pos_sum>=abs(neg_sum))
	{
		cout<<n;
		return 0;
	}
	else{
		pos_sum=0;
		sort(arr, arr+n);
		int i=n-1;
		while(pos_sum>=0)
		{
			pos_sum+=arr[i];
			i--;
			count++;
		}
	}
	cout<<count-1;

	return 0;
}