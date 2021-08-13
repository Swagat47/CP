#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;
		string s,sum="";
		cin >> s;
		
		if(k==0){
			cout<<"YES"<<endl;
			continue;
		}

		if (n%2==0 && k==n/2)
		{
			cout<<"NO"<<endl;
			continue;
		}
		
		for (int i = 0; i < n/2; ++i)
		{
			//cout<<i;
			sum = s.at(i) + sum; 
		}
		
		if(sum == s.substr((n+1)/2, n/2))
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;

	}
	return 0;
}

