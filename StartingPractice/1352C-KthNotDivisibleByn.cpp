#include <iostream>
#include <cmath>
#define ll long long
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while(t--){
		ll n,k;
		cin>>n>>k;
		ll d = k%(n-1);
		ll r=k/(n-1);
		if (d==0)
		{
			cout<<n*k/(n-1)-1<<endl;
		}
		else{
			cout<<n*r+d<<endl;
		}
	}
	return 0;
}