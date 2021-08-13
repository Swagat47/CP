#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
	int t;
	cin >> t;

	for (int i = 0; i < t; ++i)
	{
		int n;
		cin >> n;
		string s;
		cin >> s;
		if(n>=11){
			if (s.at(0)=='8')
			{
				cout<<"YES"<<endl;
			}
			else
			{
				size_t pos = s.find('8');
				if (pos<n && (n-pos)>=11){
					cout<<"YES"<<endl;
				}
				else
					cout<<"NO"<<endl;
			}
		}
		else{
			cout<<"NO"<<endl;
		}
	}
}