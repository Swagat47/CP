#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int tc;
	cin >> tc;
	while(tc--){
		int n, max = 0, pos = 0, count = 0;
		cin>>n;
		int arr[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>arr[i];
			if(i>0 && arr[i]==arr[i-1])
				count++;
		}
		if (count == n-1){
			cout<<-1<<endl;
			continue;
		}

		max = arr[0];
		for (int i = 1; i < n; ++i)
		{
			if(i==0 && arr[i]>=arr[i+1]){
				max = arr[i];
				pos = i;
			}
			if (i>0 && i<n-1)
			{
				if((arr[i]>arr[i-1] || arr[i]>arr[i+1]) && arr[i]>=max){
					max = arr[i];
					pos = i;
				}
			}
			
			if(i==n-1 && arr[i]>arr[i-1]){
				max = arr[i];
				pos = i;
			}
		}
		cout<<pos+1<<endl;
	}
	return 0;
}