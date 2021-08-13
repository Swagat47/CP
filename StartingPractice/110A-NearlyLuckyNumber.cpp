#include <iostream>
#include <string>

#define ll long long


using namespace std;

int main(){
	ll n;
	cin>>n;
	int count=0;

	string s = to_string(n);

	for (int i = 0; i < s.length(); ++i)
	{
		if(s[i]=='7' || s[i]=='4'){
			++count;
		}
	}
	if (count==7||count==4)
	{
		cout << "YES";
	}
	else
		cout<< "NO";

	return 0;
}