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
		int count=0;
		for (int i = 0; i < n; ++i)
		{
			cin >> arr[i];
		}
		for (int i = 0; i < n-1; ++i)
		{
			if (arr[i+1]>arr[i] && (float(arr[i+1])/arr[i])>2)
			{
				//cout<<i<<" ";
				float temp = float(arr[i]);
				while(arr[i+1]/temp>2){
					temp*=2;
					count++;
				}
			}
			if (arr[i+1]<arr[i] && (float(arr[i])/arr[i+1])>2)
			{
				//cout<<i<<" ";
				float temp = float(arr[i+1]);
				while(arr[i]/temp>2){
					temp*=2;
					count++;
				}
			}
		}
		cout<<count<<endl;
	}
	return 0;
}