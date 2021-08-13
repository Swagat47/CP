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
		int max=0;
		for (int i = 0; i < n; ++i)
		{
			cin >> arr[i];
			if (arr[i]>max)
			{
				max = arr[i];
			}
		}
		
	}
	return 0;
}