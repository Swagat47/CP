#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int> v;
		int count = 0;
		for (int i = 0; i < n; ++i)
		{
			int temp;
			cin >> temp;
			if (temp != i+1)
				++count;
			v.push_back(temp);
		}
		if(count == 0){
			cout<<0<<endl;
			continue;
		}
		if(v[0]==1||v[n-1]==n){
			cout<<1<<endl;
			continue;
		}
		if (v[0]==n && v[n-1]==1)
		{
			cout<<3<<endl;
			continue;
		}
		else
			cout<<2<<endl;


	}
	return 0;
}