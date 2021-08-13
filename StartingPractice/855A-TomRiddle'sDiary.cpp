#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
	int t;
	cin >> t;
	
	vector<string> v;

	for (int i = 0; i < t; ++i)
	{
		string s;
		cin >> s;

		v.push_back(s);
	}
	
	cout<<"NO"<<endl;

	for (int i = 1; i < t; ++i)
	{
		for (int j = 0; j <i; ++j)
		{
			if(v[i]==v[j]){
				cout<<"YES"<<endl;
				break;
			}
			else{
				if(j==i-1)
					cout<<"NO"<<endl;
			}
				
		}
	}
	return 0;
	
}