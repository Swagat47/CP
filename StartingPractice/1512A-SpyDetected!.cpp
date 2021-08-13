#include <iostream>
using namespace std;

int main()
{
	int tc;
	cin >> tc;
	while(tc--){
		int n, count=0, pos=0;
		cin >> n;
		int arr[n];
		cin>>arr[0];
		for (int i = 1; i < n; ++i)
		{
			cin>>arr[i];
			if (arr[i]!=arr[0])
			{
				pos = i+1;
				++count;
			}
		}
		if (count>1)
		{
			pos=1;
		}
		cout<<pos<<endl;
	}
	return 0;
}