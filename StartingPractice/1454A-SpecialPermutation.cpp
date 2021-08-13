#include <iostream>

using namespace std;

int main()
{
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		cout<<n<<" ";
		for (int i = 1; i < n; ++i)
		{
			cout<<i<<" ";
		}
		cout<<endl;
	}
	return 0;
}