#include <iostream>
#include <string.h>
#include <unordered_map>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
	int tc;
	cin >> tc;
	int tt = 1;
	while(tc--){
		int n;
		cin >> n;
		int arr[n*n][n*n];
		unordered_map <int, int> mp;
		string ans = "Yes";
		for (int i = 0; i < n*n; ++i)
		{
			for (int j = 0; j < n*n; ++j)
			{
				cin >> arr[i][j];
				++mp[arr[i][j]];
				if(mp[arr[i][j]]>1 || arr[i][j]>n*n)
					ans = "No";
			}
			mp.clear();
		}
		if (ans == "No")
		{
			cout<<"Case #"<<tt++<<": "<<ans<<endl;
			continue; 
		}
		for (int i = 0; i < n*n; ++i)
		{
			mp.clear();
			for (int j = 0; j < n*n; ++j)
			{
				mp[arr[j][i]]++;
				if(mp[arr[j][i]]>1)
					ans = "No";
			}
		}
		if (ans == "No")
		{
			cout<<"Case #"<<tt++<<": "<<ans<<endl;
			continue; 
		}
		mp.clear();
		int x=0, y=0;
		int xx=0, yy=0;
		while(x < n*n-n){
			mp.clear();
			for(int i=x; i<xx+n; i++){
				mp.clear();
				for (int j = y; j<yy+n; ++j)
				{
					/* code */
					mp[arr[i][j]]++;
					if(mp[arr[i][j]]>1)
						ans = "No";
				}
				if (ans == "No")
					break;
				y+=n;
				if(yy>n*n-n)
					break;
				else
					yy+=n;
			}
			if (ans == "No"){
				cout<<"Case #"<<tt++<<": "<<ans<<endl;
				break;
			}
			xx+=n;
			x+=n;
		}
		if (ans!="No")
		{
			cout<<"Case #"<<tt++<<": "<<"Yes"<<endl;
		}
	}
	return 0;
}