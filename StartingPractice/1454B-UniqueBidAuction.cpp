#include <iostream>
#include <unordered_map>
#include <climits>

using namespace std;

int main()
{
	int tc;
	cin>>tc;
	while(tc--){
		int ans = -1;
		int min = INT_MAX;
		int n;
		cin>>n;
		unordered_map<int , int> m, pos;
		for (int i = 0; i < n; ++i)
		{
			int temp;
			cin>>temp;
			pos[temp]= i+1;
			m[temp] += 1; 
		}

		for(auto it : m){
			if (it.second == 1 && it.first < min)
			{
				min = it.first;
				ans = pos[it.first];
			}
		}
		cout<<ans<<endl;
	}
	


	return 0;
}
