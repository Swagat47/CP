// time limit exceeded on test 4

#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int arr[n];
		int c = 0;
		for (int i = 0; i < n; ++i)
		{
			cin >> arr[i];
		}
		
		for (int i = 0; i < n-1; ++i)
		{
			for (int j = i+1; j < n; ++j)
			{
				if((arr[j]-arr[i]) == (j-i))
					++c;
			}
			//cout<<count<<endl;		
		}
		cout<<c<<endl;	
	}
	return 0;
}